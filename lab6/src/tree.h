#ifndef TREE_H
#define TREE_H

#include "pch.h"
#include "type.h"
#include "symbol.h"
#include "debug.h"
#include "Quad.h"
#include "util.h"
#include "asmcode.h"

using std::cerr;
using std::cout;
using std::endl;
using std::list;
using std::stack;
using std::string;
using std::unordered_map;
using std::ostream;

enum NodeType
{
    NODE_CONST,
    NODE_VAR,
    NODE_EXPR,
    NODE_TYPE,
    NODE_STMT,
    NODE_PROG,
    NODE_MAIN,
};

enum OperatorType
{
    OP_EQU, // ==
    OP_GTR,
    OP_LSS,
    OP_GEQ,
    OP_LEQ,
    OP_NEQ,
    OP_LOGICAL_AND,
    OP_LOGICAL_OR,
    OP_LOGICAL_NOT,
    OP_PLUS,
    OP_MINUS,
    OP_TIMES,
    OP_DIVIDE,
    OP_MOD,
    OP_AND,
    OP_OR,
    OP_NOT,
    OP_PPLUS,
    OP_MMINUS,
    EXPR_COMBINE,
    OP_CITE,
    OP_POINTER,
};

enum StmtType
{
    STMT_SKIP,
    STMT_DECL,
    STMT_IF,
    STMT_WHILE,
    STMT_ELSE,
    STMT_ASSIGN,
    STMT_VAR_INIT,
    STMT_MIN_ASSIGN,
    STMT_PLUS_ASSIGN,
    STMT_MOD_ASSIGN,
    STMT_DIV_ASSIGN,
    STMT_TIM_ASSIGN,
    STMT_FOR,
    STMT_FUN_DECL,
    STMT_FUN_DEF,
    STMT_FUN_CALL,
    STMT_RETURN,
    STMT_SCANF,
    STMT_PRINTF,
    STMT_DOMAIN,
    STMT_BREAK,    // break
    STMT_CONTINUE, // continue
    STMT_NEW,

};

struct Label
{
    string true_label;
    string false_label;
    string begin_label;
    string next_label;
};

struct TreeNode
{
public:
    int nodeID; // 用于作业的序号输出
    int lineno;
    NodeType nodeType;

    TreeNode *child = nullptr;
    TreeNode *sibling = nullptr;

    void addChild(TreeNode *);
    void addSibling(TreeNode *);

    void printNodeInfo(TreeNode *);
    void printChildrenId(TreeNode *);

    void printAST(); // 先输出自己 + 孩子们的id；再依次让每个孩子输出AST。
    void printSpecialInfo();
    void genSymbolTable();
    void genNodeId();
    void PrintSymbolTable();
    inline NodeType getNodeType() { return this->nodeType; }

    public : 
    OperatorType optype; // 如果是表达式
    Type *type;                          // 变量、类型、表达式结点，有类型。
    StmtType stype;
    int int_val;
    char ch_val;
    bool b_val;
    double d_val;
    string str_val;
    string var_name;

    Label label;

public:
    static string nodeType2String(NodeType type);
    static string opType2String(OperatorType type);
    static string sType2String(StmtType type);

public:
    TreeNode(int lineno, NodeType type);

public:
    
    SymbolTable *symTabel;
    
public:
    void generate_inter_code();
    void expr_inter_code_generate();
    void printQuads();

public:
    void gen_header(ostream &out);
    void gen_decl(ostream &out);
    void gen_temp_var(ostream &out);
    void gen_rodata(ostream &out);
    void recursive_gen_code(ostream &out);
    void stmt_gen_code(ostream &out);
    void expr_gen_code(ostream &out);
    
    string new_label();
    void get_label();
    void recursive_get_label();
    void stmt_get_label();
    void expr_get_label();
    void gen_code(ostream &out);
    void type_check();
};

// 表达式节点
TreeNode *expNode(TreeNode *, TreeNode *, TreeNode *);
// for语句节点
TreeNode *forNode(int, TreeNode *, TreeNode *, TreeNode *, TreeNode *);
// 节点类型转为符号表类型
symbolType nodeTypetoSymbolType(TreeNode *);

// 存放中间代码
extern vector<Quad> quads;
// 存放临时变量
extern stack<OpObject *> tmpVarStack;
// label的 seq
extern int label_seq;
// tmp string seq
extern int tmp_string_seq;
// tmp var counter
extern int tmpVarCounter;

#endif