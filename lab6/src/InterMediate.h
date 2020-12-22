#ifndef INTERMEDIATE_H
#define INTERMEDIATE_H

#include "pch.h"

// Inter mediate code generator
class InterMediate
{
private:
    RootASTNode *root;
    vector<Quad> quads;
    vector<symbol *> tempVar;
    FuncTable funcTable;
    SymbolTable *rootTable;

    stack<list<int>> trueList;
    stack<list<int>> falseList;
    stack<int> signal;
    stack<symbol *> childValue;
    // Function for backpatch.
    list<int> *makelist(int index);
    list<int> *merge(list<int> *list1, list<int> *list2);
    void backpatch(list<int> *backList, int target);

public:
    inline AbstractASTNode *getRoot() { return this->root; }
    inline SymbolTable *getTable() { return this->rootTable; }
    inline FuncTable &getFuncTable() { return this->funcTable; }
    inline vector<Quad> &getQuads() { return this->quads; }
    inline vector<symbol *> &getTempVars() { return this->tempVar; }
    InterMediate(RootASTNode *rootNode, StructTable *structTable);
    void Generate(AbstractASTNode *node, SymbolTable *symbolTable);
    // Create a child symbol table to generate follow code.
    SymbolTable *GenerateStmt(StmtASTNode *node, SymbolTable *symbolTable);
    SymbolTable *GenerateReturn(StmtASTNode *node, SymbolTable *symbolTable);
    symbol *GenerateOp(OperatorASTNode *node, SymbolTable *symbolTable);
    Quad *CaculateOp(OpCode op, AbstractASTNode *arg1Node, AbstractASTNode *arg2Node, symbol *result, SymbolTable *symbalTable);
    void RelopOp(Quad *trueQuad, Quad *falseQuad, OpCode op, AbstractASTNode *arg1Node, AbstractASTNode *arg2Node, SymbolTable *symbolTable);
    void printQuads();
};
#endif
