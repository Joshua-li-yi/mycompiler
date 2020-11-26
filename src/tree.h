#ifndef TREE_H
#define TREE_H

#include "pch.h"
#include "type.h"

enum NodeType
{
    NODE_CONST, 
    NODE_VAR,
    NODE_EXPR,
    NODE_TYPE,
    NODE_STMT,
    NODE_PROG,
};

enum OperatorType
{
    OP_EQU,  // ==
    OP_PLUS,
    OP_MINUS,
    OP_GTR,
    OP_LSS,
    OP_GEQ,
    OP_LEQ,
    OP_NEQ,
    OP_LOGICAL_AND,
    OP_LOGICAL_OR,
    OP_LOGICAL_NOT,
};

enum StmtType {
    STMT_SKIP,
    STMT_DECL,
    STMT_IF,
    STMT_WHILE,
    STMT_ELSE,
    STMT_ASSIGN,
}
;

struct TreeNode {
public:
    int nodeID;  // 用于作业的序号输出
    int lineno;
    NodeType nodeType;

    TreeNode* child = nullptr;
    TreeNode* sibling = nullptr;

    void addChild(TreeNode*);
    void addSibling(TreeNode*);
    
    void printNodeInfo(TreeNode*);
    void printChildrenId(TreeNode*);

    void printAST(TreeNode *); // 先输出自己 + 孩子们的id；再依次让每个孩子输出AST。
    void printSpecialInfo();

    void genNodeId();

public:
    OperatorType optype;  // 如果是表达式
    Type *type;  // 变量、类型、表达式结点，有类型。
    StmtType stype;
    int int_val;
    char ch_val;
    bool b_val;
    double d_val;
    string str_val;
    string var_name;
public:
    static string nodeType2String (NodeType type);
    static string opType2String (OperatorType type);
    static string sType2String (StmtType type);
public: 
    TreeNode(int lineno, NodeType type);
};
TreeNode *expNode(TreeNode*, TreeNode *, TreeNode *);
TreeNode *newIfStmtNode(int kind, TreeNode *expr, TreeNode *stmt);
#endif