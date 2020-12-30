#ifndef INTERMEDIATE_H
#define INTERMEDIATE_H

#include "common.h"
#include "tree.h"
#include "type.h"
#include "symbol.h"
#include "pch.h"
#include "Quad.h"
#include "debug.h"
// Inter mediate code generator
class InterMediate
{
private:
    TreeNode *root;
    vector<Quad> quads;

    // SymbolTable *varTable;// 应该是不需要符号表的参与
    int tmpVarCounter;
    stack<list<int>> trueList;
    stack<list<int>> falseList;
    stack<int> signal;
    // stack<symbol *> childValue;
    // Function for backpatch.
    list<int> *makelist(int index);
    list<int> *merge(list<int> *list1, list<int> *list2);
    void backpatch(list<int> *backList, int target);

public:
    inline TreeNode *getRoot() { return this->root; }
    // inline SymbolTable *getTable() { return this->varTable; }
    // inline FuncTable &getFuncTable() { return this->funcTable; }
    inline vector<Quad> &getQuads() { return this->quads; }
    // inline vector<symbol *> &getTempVars() { return this->tempVar; }

    InterMediate(TreeNode*);
    void Generate(TreeNode *node);
    // // Create a child symbol table to generate follow code.
    // SymbolTable *GenerateStmt(TreeNode *node, SymbolTable *symbolTable);
    // SymbolTable *GenerateReturn(TreeNode *node, SymbolTable *symbolTable);
    // symbol *GenerateOp(OperatorASTNode *node, SymbolTable *symbolTable);
    // Quad *CaculateOp(OpCode op, TreeNode *arg1Node, TreeNode *arg2Node, symbol *result, SymbolTable *symbalTable);
    // void RelopOp(Quad *trueQuad, Quad *falseQuad, OpCode op, TreeNode *arg1Node, TreeNode *arg2Node, SymbolTable *symbolTable);

    void printQuads();
};

OpCode expToOpCode(OperatorType);
#endif
