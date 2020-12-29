#include "InterMediate.h"
#include <typeinfo>
#include <cstdio>

InterMediate::InterMediate(TreeNode *rootNode)
{
    this->root = rootNode;
}

// TODO
void InterMediate::Generate(TreeNode *node)
{
    if (node == nullptr)
    {
        cout << "nullptr" << endl;
        return;
    }
    switch (node->getNodeType())
    {
    case NODE_STMT:
    {
        test(0);

        TreeNode *cur = node;
        if (cur->stype == STMT_DECL)
        {
            test(3);

            symbolType tmp_type;
            if (cur->child != nullptr)
            {
                if (cur->child->nodeType == NODE_TYPE)
                    tmp_type = nodeTypetoSymbolType(cur->child);
                test(3);

                TreeNode *tmp = cur->child->sibling;
                while (tmp != nullptr)
                {
                    test(5);

                    if (tmp->nodeType == NODE_VAR)
                    {
                        struct symbol *sym = new symbol();
                        sym->name = tmp->var_name;
                        sym->token = tmp->nodeID;
                        sym->type = tmp_type;
                        test(1);
                        if ((tmp->sibling->nodeType != NODE_CONST) | (tmp->sibling==nullptr))
                        {
                            test(2);

                            Quad quad_int = Quad(OpCode_VAR_DECL, nullptr, sym);
                            this->quads.push_back(quad_int);
                        }
                        else
                        {
                            Quad quad_int = Quad(OpCode_VAR_DECL, tmp->sibling->int_val, sym);
                            this->quads.push_back(quad_int);
                        }

                    }
                    tmp = tmp->sibling;
                }
            }
        }
        delete cur;
        break;
    }
    case NODE_VAR:
    {
    }
    case NODE_CONST:
        break;
    default:
        break;
    }
    for (TreeNode *t = node->child; t; t = t->sibling)
        Generate(t);
    // TreeNode *p = node->getChild();
    // switch (node->getNodeType())
    // {
    // case ASTNodeType::defFunc:
    // {
    //     // 如果是函数
    //     FuncSymbol *func = new FuncSymbol(node);
    //     this->funcTable.addFunction(func);
    //     Quad *temp;
    //     symbol *tempSym = new symbol(func->getKeyName(), symbolType::Void);
    //     temp = new Quad(OpCode::FUNC_DEF, tempSym, (symbol *)nullptr);
    //     this->quads.push_back(*temp);
    //     while (p != nullptr)
    //     {
    //         SymbolTable *childTable = symbolTable->createChildTable(true);
    //         childTable->addFromFunctionArgs(node);
    //         Generate(p, childTable);
    //         p = p->getPeer();
    //     }
    //     temp = new Quad(OpCode::END_FUNCTION, (symbol *)nullptr, (symbol *)nullptr);
    //     this->quads.push_back(*temp);
    //     delete temp;
    //     break;
    // }
    // case ASTNodeType::callFunc:
    // {
    //     // 函数调用语句
    //     int count = 0;
    //     TreeNode *var = ((CallFunASTNode *)node)->getVarList();
    //     std::string addOn = "";
    //     while (var != nullptr)
    //     {
    //         count = count + 1;
    //         Quad *temp;
    //         if (var->getNodeType() == ASTNodeType::assignVar)
    //         {
    //             // 通过符号表找到内容
    //             symbol *arg1 = symbolTable->findSymbol(var->getContent());
    //             temp = new Quad(OpCode::PARAM, arg1, (symbol *)nullptr);
    //             switch (arg1->getIdType())
    //             {

    //             case symbolType::integer:
    //                 addOn = addOn + "_i";
    //                 break;
    //             case symbolType::pointer:
    //                 addOn = addOn + "_p";
    //                 break;
    //             default:
    //                 break;
    //             }
    //         }
    //         else if (var->getNodeType() == ASTNodeType::literal)
    //         {
    //             // 字面量
    //             // stoi：string to int函数
    //             int arg1 = std::stoi(var->getContent());
    //             temp = new Quad(OpCode::PARAM, arg1, (symbol *)nullptr);
    //             addOn = addOn + "_i";
    //         }
    //         else if (var->getNodeType() == ASTNodeType::op)
    //         {

    //             symbol *arg1 = GenerateOp((OperatorASTNode *)var, symbolTable);
    //             temp = new Quad(OpCode::PARAM, arg1, (symbol *)nullptr);
    //             switch (arg1->getIdType())
    //             {
    //             case symbolType::integer:
    //                 addOn = addOn + "_i";
    //                 break;
    //             case symbolType::pointer:
    //                 addOn = addOn + "_p";
    //                 break;
    //             default:
    //                 break;
    //             }
    //         }
    //         this->quads.push_back(*temp);
    //         var = var->getPeer();
    //     }
    //     FuncSymbol *funSym = this->funcTable.findFunction(node->getContent() + addOn);
    //     if (funSym == nullptr)
    //     {
    //         cout << "\033[31mError: \033[0m"
    //              << " function is not decleared." << endl;
    //         exit(1);
    //     }
    //     symbol *funcSymbol = new symbol(funSym->getKeyName(), symbolType::Void);
    //     // symbol *funcSymbol = new symbol(funSym->getFunName(), symbolType::Void);
    //     symbol *tempV = nullptr;

    //     if (node->getParent()->getNodeType() == ASTNodeType::stmt)
    //     {
    //         StmtASTNode *stmt = (StmtASTNode *)node->getParent();
    //         if (stmt->getStmtType() == StmtType::expStmt)
    //         {
    //             tempV = nullptr;
    //         }
    //         else
    //         {
    //             tempV = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
    //             tempVar.push_back(tempV);
    //         }
    //     }
    //     else
    //     {
    //         tempV = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
    //         tempVar.push_back(tempV);
    //     }

    //     Quad *temp = new Quad(OpCode::CALL, funcSymbol, count, tempV);
    //     this->quads.push_back(*temp);
    // }
    // case ASTNodeType::literal:
    // {
    //     if (node->getParent()->getNodeType() == ASTNodeType::op)
    //     {
    //         OperatorASTNode *par = (OperatorASTNode *)node->getParent();
    //         if (par->getType() == opType::And || par->getType() == opType::Or || par->getType() == opType::Not)
    //         {
    //             Quad *trueQuad = new Quad(OpCode::JUMP_GREAT, std::stoi(node->getContent()), 0, (int)nullptr);
    //             Quad *falseQuad = new Quad(OpCode::JUMP, (int)nullptr);
    //             list<int> trueL;
    //             trueL.push_back(quads.size());
    //             this->quads.push_back(*trueQuad);
    //             list<int> falseL;
    //             falseL.push_back(quads.size());
    //             this->quads.push_back(*falseQuad);
    //             trueList.push(trueL);
    //             falseList.push(falseL);
    //         }
    //     }
    //     break;
    // }
    // case ASTNodeType::op:
    // {
    //     if (((OperatorASTNode *)node)->getType() == opType::And || ((OperatorASTNode *)node)->getType() == opType::Or)
    //     {
    //         Generate(p, symbolTable);
    //         signal.push(quads.size());
    //         Generate(p->getPeer(), symbolTable);
    //     }
    //     else if (((OperatorASTNode *)node)->getType() == opType::Not || ((OperatorASTNode *)node)->getType() == opType::Relop)
    //     {
    //         while (p != nullptr)
    //         {
    //             Generate(p, symbolTable);
    //             p = p->getPeer();
    //         }
    //     }
    //     this->GenerateOp((OperatorASTNode *)node, symbolTable);
    //     break;
    // }
    // case ASTNodeType::stmt:
    // {
    //     StmtASTNode *ret = (StmtASTNode *)node;
    //     if (ret->getStmtType() == StmtType::returnStmt)
    //     {
    //         GenerateReturn((StmtASTNode *)node, symbolTable);
    //     }
    //     else
    //     {
    //         while (p != nullptr)
    //         {
    //             Generate(p, this->GenerateStmt((StmtASTNode *)node, symbolTable));
    //             p = p->getPeer();
    //         }
    //     }
    //     break;
    // }
    // case ASTNodeType::defVar:
    // {
    //     DefVarASTNode *tempNode = (DefVarASTNode *)node;
    //     if (tempNode->getSymbolType() == symbolType::Struct)
    //     {
    //         symbolTable->addStructSymbol(tempNode->getStructType(), tempNode->getContent());
    //     }
    //     else if (tempNode->getSymbolType() == symbolType::Array)
    //     {
    //         symbolTable->addArraySymbol(tempNode);
    //     }
    //     else
    //     {
    //         symbolTable->addSymbol(tempNode->getContent(), tempNode->getSymbolType());
    //     }
    //     symbol *varSymbol = symbolTable->findSymbol(node->getContent());
    //     if (p != nullptr)
    //     {
    //         Quad *temp;
    //         if (p->getNodeType() == ASTNodeType::literal)
    //         {
    //             int arg1 = std::stoi(p->getContent());
    //             temp = new Quad(OpCode::ASSIGN, arg1, varSymbol);
    //         }
    //         else if (p->getNodeType() == ASTNodeType::assignVar)
    //         {
    //             symbol *arg1 = symbolTable->findSymbol(p->getContent());
    //             temp = new Quad(OpCode::ASSIGN, arg1, varSymbol);
    //         }
    //         else if (p->getNodeType() == ASTNodeType::op)
    //         {
    //             symbol *arg1 = this->GenerateOp((OperatorASTNode *)p, symbolTable);
    //             temp = new Quad(OpCode::ASSIGN, arg1, varSymbol);
    //         }
    //         else if (p->getNodeType() == ASTNodeType::callFunc)
    //         {
    //             Generate(p, symbolTable);
    //             symbol *arg1 = tempVar.back();
    //             temp = new Quad(OpCode::ASSIGN, arg1, varSymbol);
    //         }
    //         else
    //         {
    //             cout << "\033[31mError: \033[0m"
    //                  << "Type error" << endl;
    //             exit(1);
    //         }
    //         this->quads.push_back(*temp);
    //     }
    //     break;
    // }
    // case ASTNodeType::assignVar:
    // {
    //     if (node->getParent()->getNodeType() == ASTNodeType::op)
    //     {
    //         OperatorASTNode *par = (OperatorASTNode *)node->getParent();
    //         if (par->getType() == opType::And || par->getType() == opType::Or || par->getType() == opType::Not)
    //         {
    //             symbol *arg1 = symbolTable->findSymbol(node->getContent());
    //             Quad *trueQuad = new Quad(OpCode::JUMP_GREAT, arg1, 0, (int)nullptr);
    //             Quad *falseQuad = new Quad(OpCode::JUMP, (int)nullptr);
    //             list<int> trueL;
    //             trueL.push_back(quads.size());
    //             this->quads.push_back(*trueQuad);
    //             list<int> falseL;
    //             falseL.push_back(quads.size());
    //             this->quads.push_back(*falseQuad);
    //             trueList.push(trueL);
    //             falseList.push(falseL);
    //         }
    //     }
    //     break;
    // }
    // case ASTNodeType::loop: // for(1.DefASTNODE, 2.OperatorASTNODE, 3.OperatorASTNODE, 4.StmtASTNODE)
    // {
    //     LoopASTNode *loop = (LoopASTNode *)node;
    //     if (loop->getType() == LoopType::_for)
    //     {
    //         SymbolTable *childTable = symbolTable->createChildTable(false);
    //         Generate(((LoopASTNode *)node)->getDec(), childTable);
    //         int start = quads.size();
    //         Generate(((LoopASTNode *)node)->getCond(), childTable);
    //         list<int> JudgeTrue = trueList.top();
    //         list<int> JudgeFalse = falseList.top();
    //         trueList.pop();
    //         falseList.pop();
    //         backpatch(&JudgeTrue, JudgeTrue.back() + 2);
    //         while (p != nullptr)
    //         {
    //             Generate(p, childTable);
    //             p = p->getPeer();
    //         }
    //         Generate(((LoopASTNode *)node)->getAction(), childTable);

    //         Quad *temp = new Quad(OpCode::JUMP, start);
    //         this->quads.push_back(*temp);
    //         int end = quads.size();
    //         backpatch(&JudgeFalse, end);
    //     }
    //     else if (loop->getType() == LoopType::_while)
    //     {
    //         int start = quads.size();
    //         Generate(((LoopASTNode *)node)->getCond(), symbolTable);
    //         list<int> JudgeTrue = trueList.top();
    //         list<int> JudgeFalse = falseList.top();
    //         trueList.pop();
    //         falseList.pop();
    //         backpatch(&JudgeTrue, JudgeTrue.back() + 2);
    //         while (p != nullptr)
    //         {
    //             Generate(p, symbolTable->createChildTable(false));
    //             p = p->getPeer();
    //         }

    //         Quad *temp = new Quad(OpCode::JUMP, start);
    //         this->quads.push_back(*temp);
    //         int end = quads.size();
    //         backpatch(&JudgeFalse, end);
    //     }
    //     break;
    // }
    // case ASTNodeType::select: // Just IF and ELSE.
    // {
    //     SelectASTNode *select = (SelectASTNode *)node;
    //     Generate(select->getCondition(), symbolTable);
    //     int start = quads.size();
    //     list<int> JudgeTrue = trueList.top();
    //     list<int> JudgeFalse = falseList.top();
    //     trueList.pop();
    //     falseList.pop();

    //     backpatch(&JudgeTrue, start);
    //     Generate(select->getBody(), symbolTable);
    //     if (select->getElse() != nullptr)
    //     {
    //         Quad *temp = new Quad(OpCode::JUMP, (int)nullptr);
    //         this->quads.push_back(*temp);
    //         temp = &quads.back();
    //         int elseStart = quads.size();
    //         Generate(select->getElse(), symbolTable);
    //         backpatch(&JudgeFalse, elseStart);
    //         int end = quads.size();
    //         temp->backpatch(end);
    //     }
    //     else
    //     {
    //         int end = quads.size();
    //         backpatch(&JudgeFalse, end);
    //     }
    //     break;
    // }
    // case ASTNodeType::root:
    // {
    //     while (p != nullptr)
    //     {
    //         Generate(p, symbolTable);
    //         p = p->getPeer();
    //     }
    //     break;
    // }
    // default:
    //     cout << "Hello! Something Wrong happened!\n";
    //     break;
    // }
}

// SymbolTable *InterMediate::GenerateStmt(StmtASTNode *node, SymbolTable *symbolTable)
// {
//     switch (node->getStmtType())
//     {
//     case StmtType::compStmt:
//     {
//         if (node->getParent()->getNodeType() == ASTNodeType::loop)
//             return symbolTable;
//         if (node->getParent()->getNodeType() == ASTNodeType::defFunc)
//             return symbolTable;
//         return symbolTable->createChildTable(false);
//     }
//     break;
//     case StmtType::returnStmt:
//     {
//         TreeNode *p = node->getChild();
//         Quad *temp;
//         symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
//         tempVar.push_back(result);
//         if (p == nullptr)
//         {
//             temp = new Quad(OpCode::RETURN, (symbol *)nullptr, (symbol *)nullptr, (symbol *)nullptr);
//         }
//         else if (p->getNodeType() == ASTNodeType::literal)
//         {
//             int arg1 = std::stoi(p->getContent());
//             temp = new Quad(OpCode::RETURN, arg1, result);
//         }
//         else if (p->getNodeType() == ASTNodeType::assignVar)
//         {
//             symbol *arg1 = symbolTable->findSymbol(p->getContent());
//             temp = new Quad(OpCode::RETURN, arg1, result);
//         }
//         else if (p->getNodeType() == ASTNodeType::op)
//         {
//             symbol *arg1 = this->GenerateOp((OperatorASTNode *)p, symbolTable);
//             temp = new Quad(OpCode::RETURN, arg1, result);
//         }
//         quads.push_back(*temp);
//     }
//     break;
//     default:
//         break;
//     }
//     return symbolTable;
// }

// SymbolTable *InterMediate::GenerateReturn(StmtASTNode *node, SymbolTable *symbolTable)
// {
//     TreeNode *p = node->getChild();
//     Quad *temp;
//     symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
//     tempVar.push_back(result);
//     if (p == nullptr)
//     {
//         temp = new Quad(OpCode::RETURN, (symbol *)nullptr, (symbol *)nullptr, (symbol *)nullptr);
//     }
//     else if (p->getNodeType() == ASTNodeType::literal)
//     {
//         int arg1 = std::stoi(p->getContent());
//         temp = new Quad(OpCode::RETURN, arg1, result);
//     }
//     else if (p->getNodeType() == ASTNodeType::assignVar)
//     {
//         symbol *arg1 = symbolTable->findSymbol(p->getContent());
//         temp = new Quad(OpCode::RETURN, arg1, result);
//         delete arg1;
//     }
//     else if (p->getNodeType() == ASTNodeType::op)
//     {
//         symbol *arg1 = this->GenerateOp((OperatorASTNode *)p, symbolTable);
//         temp = new Quad(OpCode::RETURN, arg1, result);
//         delete arg1;
//     }
//     else if (p->getNodeType() == ASTNodeType::callFunc)
//     {
//         Generate(p, symbolTable);
//         symbol *arg1 = tempVar.back();
//         temp = new Quad(OpCode::RETURN, arg1, (symbol *)nullptr);
//         delete arg1;
//     }
//     else
//     {
//         cout << "\033[31mError: \033[0m"
//              << "Type error" << endl;
//         exit(1);
//     }
//     quads.push_back(*temp);
//     delete temp;
// }

// // 生成运算符
// symbol *InterMediate::GenerateOp(OperatorASTNode *node, SymbolTable *symbolTable)
// {
//     Quad *temp;
//     TreeNode *arg1Node, *arg2Node;
//     switch (node->getType())
//     {
//         // 节点的类型如果是赋值
//     case opType::Assignop:
//     {
//         symbol *result;
//         OpCode op;
//         // 给指针赋值
//         if (node->getChild()->getNodeType() == ASTNodeType::op && ((OperatorASTNode *)node->getChild())->getType() == opType::GetValue)
//         {
//             op = OpCode::ASSIGN_POINTER;
//             result = symbolTable->findSymbol(node->getChild()->getChild()->getContent());
//         }
//         else
//         // 普通赋值
//         {
//             op = OpCode::ASSIGN;
//             if (node->getChild()->getNodeType() != ASTNodeType::assignVar)
//             {
//                 cout << "\033[31mError: \033[0m"
//                      << node->getChild()->getContent() << " is not a variable. What are u doing?" << endl;
//                 exit(1);
//             }
//             result = symbolTable->findSymbol(node->getChild()->getContent());
//         }

//         TreeNode *arg1Node = node->getChild()->getPeer();
//         if (arg1Node->getNodeType() == ASTNodeType::assignVar)
//         // 变量给变量赋值
//         {
//             symbol *arg1 = symbolTable->findSymbol(arg1Node->getContent());
//             if (result->getIdType() == symbolType::integer && arg1->getIdType() == symbolType::pointer)
//             {
//                 cout << "\033[31mError: \033[0m"
//                      << "Syntax error, maybe you have used the wrong type: " << (int)arg1Node->getNodeType() << "  Content:" << arg1Node->getContent() << endl;
//                 exit(1);
//             }
//             temp = new Quad(op, arg1, result);
//         }
//         else if (arg1Node->getNodeType() == ASTNodeType::op)
//         {
//             symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
//             temp = new Quad(op, arg1, result);
//         }
//         else if (arg1Node->getNodeType() == ASTNodeType::literal)
//         {
//             int arg1 = std::stoi(arg1Node->getContent());
//             temp = new Quad(op, arg1, result);
//         }
//         else if (arg1Node->getNodeType() == ASTNodeType::callFunc)
//         {
//             Generate(arg1Node, symbolTable);
//             symbol *arg1 = tempVar.back();
//             temp = new Quad(op, arg1, result);
//         }
//         else
//         {
//             cout << "\033[31mError: \033[0m"
//                  << "No match type of" << (int)arg1Node->getNodeType() << "  Content:" << arg1Node->getContent() << endl;
//             exit(1);
//         }
//         this->quads.push_back(*temp);
//         return result;
//         break;
//     }
//     case opType::AssignArray:
//         // 给数组赋值
//         {
//             symbol *result;
//             if (node->getChild()->getNodeType() != ASTNodeType::op)
//             {
//                 cout << "\033[31mError: \033[0m"
//                      << node->getContent() << " syntax error. What are u doing?" << endl;
//             }
//             result = GenerateOp((OperatorASTNode *)node->getChild(), symbolTable);

//             TreeNode *arg1Node = node->getChild()->getPeer();
//             symbol *arg2 = this->childValue.top();
//             this->childValue.pop();

//             if (arg1Node->getNodeType() == ASTNodeType::assignVar)
//             {
//                 symbol *arg1 = symbolTable->findSymbol(arg1Node->getContent());
//                 temp = new Quad(OpCode::ASSIGN_ARRAY, arg1, arg2, result);
//             }
//             else if (arg1Node->getNodeType() == ASTNodeType::op)
//             {
//                 symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
//                 temp = new Quad(OpCode::ASSIGN_ARRAY, arg1, arg2, result);
//             }
//             else if (arg1Node->getNodeType() == ASTNodeType::literal)
//             {
//                 int arg1 = std::stoi(arg1Node->getContent());
//                 temp = new Quad(OpCode::ASSIGN_ARRAY, arg1, arg2, result);
//             }
//             else if (arg1Node->getNodeType() == ASTNodeType::callFunc)
//             {
//                 Generate(arg1Node, symbolTable);
//                 symbol *arg1 = tempVar.back();
//                 temp = new Quad(OpCode::ASSIGN_ARRAY, arg1, arg2, result);
//             }
//             else
//             {
//                 cout << "\033[31mError: \033[0m"
//                      << "No match type of" << (int)arg1Node->getNodeType() << "  Content:" << arg1Node->getContent() << endl;
//                 exit(1);
//             }
//             this->quads.push_back(*temp);

//             return result;
//             break;
//         }
//     case opType::AssignMember:
//     {
//         symbol *result;
//         if (node->getChild()->getNodeType() != ASTNodeType::op)
//         {
//             cout << "\033[31mError: \033[0m"
//                  << node->getContent() << " syntax error. What are u doing?" << endl;
//         }

//         result = GenerateOp((OperatorASTNode *)node->getChild(), symbolTable);
//         TreeNode *arg1Node = node->getChild()->getPeer();
//         symbol *arg2 = this->childValue.top();
//         this->childValue.pop();

//         if (arg1Node->getNodeType() == ASTNodeType::assignVar)
//         {
//             symbol *arg1 = symbolTable->findSymbol(arg1Node->getContent());
//             temp = new Quad(OpCode::ASSIGN_STRUCT, arg1, arg2, result);
//         }
//         else if (arg1Node->getNodeType() == ASTNodeType::op)
//         {
//             symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
//             temp = new Quad(OpCode::ASSIGN_STRUCT, arg1, arg2, result);
//         }
//         else if (arg1Node->getNodeType() == ASTNodeType::literal)
//         {
//             int arg1 = std::stoi(arg1Node->getContent());
//             temp = new Quad(OpCode::ASSIGN_STRUCT, arg1, arg2, result);
//         }
//         else if (arg1Node->getNodeType() == ASTNodeType::callFunc)
//         {
//             Generate(arg1Node, symbolTable);
//             symbol *arg1 = tempVar.back();
//             temp = new Quad(OpCode::ASSIGN_STRUCT, arg1, arg2, result);
//         }
//         else
//         {
//             cout << "\033[31mError: \033[0m"
//                  << "No match type of" << (int)arg1Node->getNodeType() << "  Content:" << arg1Node->getContent() << endl;
//             exit(1);
//         }
//         this->quads.push_back(*temp);

//         break;
//     }
//     case opType::Relop:
//         // 循环
//         {
//             Quad *tempTrue, *tempFalse;
//             arg1Node = node->getChild();
//             arg2Node = arg1Node->getPeer();
//             if (node->getContent() == ">")
//             {
//                 RelopOp(tempTrue, tempFalse, OpCode::JUMP_GREAT, arg1Node, arg2Node, symbolTable);
//             }
//             else if (node->getContent() == ">=")
//             {
//                 RelopOp(tempTrue, tempFalse, OpCode::JUMP_EQ_GREAT, arg1Node, arg2Node, symbolTable);
//             }
//             else if (node->getContent() == "<")
//             {
//                 RelopOp(tempTrue, tempFalse, OpCode::JUMP_SMALL, arg1Node, arg2Node, symbolTable);
//             }
//             else if (node->getContent() == "<=")
//             {
//                 RelopOp(tempTrue, tempFalse, OpCode::JUMP_EQ_SMALL, arg1Node, arg2Node, symbolTable);
//             }
//             else if (node->getContent() == "!=")
//             {
//                 RelopOp(tempTrue, tempFalse, OpCode::JUMP_NOT_EQUAL, arg1Node, arg2Node, symbolTable);
//             }
//             else if (node->getContent() == "==")
//             {
//                 RelopOp(tempTrue, tempFalse, OpCode::JUMP_EQUAL, arg1Node, arg2Node, symbolTable);
//             }

//             break;
//         }
//     case opType::Plus: // 可能需要重构一下，方便看
//         // 加？
//         {
//             symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
//             arg1Node = node->getChild();
//             arg2Node = arg1Node->getPeer();
//             tempVar.push_back(result);
//             result = tempVar.back();
//             // 计算运算符？
//             temp = this->CaculateOp(OpCode::PLUS, arg1Node, arg2Node, result, symbolTable);
//             this->quads.push_back(*temp);
//             return result;
//             break;
//         }
//     case opType::Minus:
//         // 减法？
//         {
//             symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
//             arg1Node = node->getChild();
//             arg2Node = arg1Node->getPeer();
//             // push到存放符号表的数组tempVar
//             tempVar.push_back(result);
//             // 返回最后一个：
//             result = tempVar.back();
//             // 生成四元式
//             temp = this->CaculateOp(OpCode::MINUS, arg1Node, arg2Node, result, symbolTable);
//             // 推到数组里面
//             this->quads.push_back(*temp);
//             return result;
//             break;
//         }
//     case opType::Times:
//         // 乘法
//         {
//             symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
//             arg1Node = node->getChild();
//             arg2Node = arg1Node->getPeer();
//             tempVar.push_back(result);
//             result = tempVar.back();
//             temp = this->CaculateOp(OpCode::TIMES, arg1Node, arg2Node, result, symbolTable);
//             this->quads.push_back(*temp);
//             return result;
//             break;
//         }
//     case opType::Div:
//         // 除法
//         {
//             symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
//             arg1Node = node->getChild();
//             arg2Node = arg1Node->getPeer();
//             tempVar.push_back(result);
//             result = tempVar.back();
//             temp = this->CaculateOp(OpCode::DIV, arg1Node, arg2Node, result, symbolTable);
//             this->quads.push_back(*temp);
//             return result;
//             break;
//         }
//     case opType::Mod:
//         // 取模：%
//         {
//             symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
//             arg1Node = node->getChild();
//             arg2Node = arg1Node->getPeer();
//             tempVar.push_back(result);
//             result = tempVar.back();
//             temp = this->CaculateOp(OpCode::MOD, arg1Node, arg2Node, result, symbolTable);
//             this->quads.push_back(*temp);
//             return result;
//             break;
//         }
//     case opType::Power:
//         // 乘方
//         {
//             symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
//             arg1Node = node->getChild();
//             arg2Node = arg1Node->getPeer();
//             tempVar.push_back(result);
//             result = tempVar.back();
//             temp = this->CaculateOp(OpCode::POWER, arg1Node, arg2Node, result, symbolTable);
//             this->quads.push_back(*temp);
//             return result;
//             break;
//         }
//     case opType::Negative:
//         // 负数
//         {
//             symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
//             arg1Node = node->getChild();
//             tempVar.push_back(result);
//             result = tempVar.back();
//             if (arg1Node->getNodeType() == ASTNodeType::assignVar)
//             {
//                 symbol *arg1 = symbolTable->findSymbol(arg1Node->getContent());
//                 temp = new Quad(OpCode::NEGATIVE, arg1, result);
//             }
//             else if (arg1Node->getNodeType() == ASTNodeType::literal)
//             {
//                 int arg1 = std::stoi(arg1Node->getContent());
//                 temp = new Quad(OpCode::NEGATIVE, arg1, result);
//             }
//             else if (arg1Node->getNodeType() == ASTNodeType::op)
//             {
//                 symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
//                 temp = new Quad(OpCode::NEGATIVE, arg1, result);
//             }
//             this->quads.push_back(*temp);
//             return result;
//             break;
//         }
//     case opType::SingalAnd:
//         // 单个与运算符：&
//         {
//             symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::pointer);
//             arg1Node = node->getChild();
//             tempVar.push_back(result);
//             if (arg1Node->getNodeType() == ASTNodeType::assignVar)
//             {
//                 symbol *arg1 = symbolTable->findSymbol(arg1Node->getContent());
//                 temp = new Quad(OpCode::GET_ADDRESS, arg1, result);
//             }
//             else
//             {
//                 cout << "\033[31mError: \033[0m"
//                      << " lvalue required as unary ‘&’ operand" << endl;
//                 exit(1);
//             }
//             this->quads.push_back(*temp);
//             return result;
//             break;
//         }
//     case opType::And: // 保证栈顶是：node2List, node1List,所以得先遍历子节点，再到&&节点
//         // 很重要的回填操作
//         {
//             list<int> leftTrue, rightTrue, leftFalse, rightFalse;
//             rightTrue = trueList.top();
//             trueList.pop();
//             leftTrue = trueList.top();
//             trueList.pop();
//             rightFalse = falseList.top();
//             falseList.pop();
//             leftFalse = falseList.top();
//             falseList.pop();
//             leftFalse.merge(rightFalse);
//             falseList.push(leftFalse);
//             trueList.push(rightTrue);
//             backpatch(&leftTrue, signal.top());
//             signal.pop();
//             break;
//         }
//     case opType::Or:
//     {
//         list<int> leftTrue, rightTrue, leftFalse, rightFalse;
//         rightTrue = trueList.top();
//         trueList.pop();
//         leftTrue = trueList.top();
//         trueList.pop();
//         rightFalse = falseList.top();
//         falseList.pop();
//         leftFalse = falseList.top();
//         falseList.pop();
//         leftTrue.merge(rightTrue);
//         trueList.push(leftTrue);
//         falseList.push(rightFalse);
//         backpatch(&leftFalse, signal.top());
//         signal.pop();
//         break;
//     }
//     case opType::Not:
//     {
//         list<int> trueL, falseL;
//         trueL = trueList.top();
//         trueList.pop();
//         falseL = falseList.top();
//         falseList.pop();
//         trueList.push(falseL);
//         falseList.push(trueL);
//         break;
//     }
//     case opType::GetValue:
//     {
//         Quad *temp;
//         symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
//         arg1Node = node->getChild();
//         tempVar.push_back(result);
//         if (arg1Node->getNodeType() == ASTNodeType::assignVar)
//         {
//             symbol *arg1 = symbolTable->findSymbol(arg1Node->getContent());
//             temp = new Quad(OpCode::GET_VALUE, arg1, result);
//         }
//         else if (arg1Node->getNodeType() == ASTNodeType::callFunc)
//         {
//             Generate(arg1Node, symbolTable);
//             symbol *arg1 = tempVar.back();
//             temp = new Quad(OpCode::GET_VALUE, arg1, result);
//         }
//         else if (arg1Node->getNodeType() == ASTNodeType::op)
//         {
//             symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
//             temp = new Quad(OpCode::GET_VALUE, arg1, result);
//         }
//         else
//         {
//             cout << "\033[31mError: \033[0m"
//                  << " lvalue required as unary ‘&’ operand" << endl;
//             exit(1);
//         }
//         this->quads.push_back(*temp);
//         return result;
//         break;
//     }
//     case opType::GetArrayValue:
//     {
//         Quad *temp;
//         symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
//         TreeNode *arg1Node = node->getChild();
//         TreeNode *arg2Node = arg1Node->getPeer();
//         symbol *arg1 = symbolTable->findSymbol(arg1Node->getContent());
//         // 如果赋值，就把index push到 childValue中 返回arg1
//         // 如果是别的运算，就把值放到temp中，返回temp，并且加一条四元式
//         if (node->getParent()->getNodeType() == ASTNodeType::op && ((OperatorASTNode *)node->getParent())->getType() == opType::AssignArray)
//         {
//             if (arg2Node->getNodeType() == ASTNodeType::assignVar)
//             {
//                 childValue.push(symbolTable->findSymbol(arg2Node->getContent()));
//             }
//             else if (arg2Node->getNodeType() == ASTNodeType::callFunc)
//             {
//                 Generate(arg2Node, symbolTable);
//                 symbol *arg2 = tempVar.back();
//                 childValue.push(arg2);
//             }
//             else if (arg2Node->getNodeType() == ASTNodeType::literal)
//             {
//                 symbol *arg2 = new symbol(arg2Node->getContent(), symbolType::literal);
//                 childValue.push(arg2);
//             }
//             else if (arg2Node->getNodeType() == ASTNodeType::op)
//             {
//                 symbol *arg2 = GenerateOp((OperatorASTNode *)arg2Node, symbolTable);
//                 childValue.push(arg2);
//             }
//             else
//             {
//                 cout << "\033[31mError: \033[0m"
//                      << "Type error" << endl;
//                 exit(1);
//             }
//             return arg1;
//         }
//         else
//         {
//             if (arg2Node->getNodeType() == ASTNodeType::assignVar)
//             {
//                 symbol *arg2 = symbolTable->findSymbol(arg2Node->getContent());
//                 temp = new Quad(OpCode::GET_ARRAY, arg1, arg2, result);
//             }
//             else if (arg2Node->getNodeType() == ASTNodeType::callFunc)
//             {
//                 Generate(arg2Node, symbolTable);
//                 symbol *arg2 = tempVar.back();
//                 temp = new Quad(OpCode::GET_ARRAY, arg1, arg2, result);
//             }
//             else if (arg2Node->getNodeType() == ASTNodeType::literal)
//             {
//                 int arg2 = std::stoi(arg2Node->getContent());
//                 temp = new Quad(OpCode::GET_ARRAY, arg1, arg2, result);
//             }
//             else if (arg2Node->getNodeType() == ASTNodeType::op)
//             {
//                 symbol *arg2 = GenerateOp((OperatorASTNode *)arg2Node, symbolTable);
//                 temp = new Quad(OpCode::GET_ARRAY, arg1, arg2, result);
//             }
//             else
//             {
//                 cout << "\033[31mError: \033[0m"
//                      << "Type error" << endl;
//                 exit(1);
//             }
//             tempVar.push_back(result);
//             this->quads.push_back(*temp);
//             return result;
//         }
//     }
//     case opType::GetMember:
//     {
//         Quad *temp;
//         symbol *result = new symbol("Temp" + std::to_string(tempVar.size()), symbolType::integer);
//         TreeNode *arg1Node = node->getChild();
//         TreeNode *arg2Node = arg1Node->getPeer();
//         symbol *arg1 = symbolTable->findSymbol(arg1Node->getContent());
//         // 短路写法，应该没啥问题，不行再改
//         if (node->getParent()->getNodeType() == ASTNodeType::op && ((OperatorASTNode *)node->getParent())->getType() == opType::AssignMember)
//         {
//             if (arg2Node->getNodeType() == ASTNodeType::assignVar)
//             {
//                 std::string typeName = ((structDecSymbol *)arg1)->getTypeName();
//                 int offset = this->rootTable->getSymbolTable()->findStruct(typeName)->getMemberOffset(arg2Node->getContent());
//                 symbol *arg2 = new symbol(std::to_string(offset), symbolType::literal);
//                 childValue.push(arg2);
//             }
//             else
//             {
//                 cout << "\033[31mError: \033[0m"
//                      << "Type error" << endl;
//                 exit(1);
//             }
//             return arg1;
//         }
//         else
//         {
//             if (arg2Node->getNodeType() == ASTNodeType::assignVar)
//             {
//                 std::string typeName = ((structDecSymbol *)arg1)->getTypeName();
//                 int offset = this->rootTable->getSymbolTable()->findStruct(typeName)->getMemberOffset(arg2Node->getContent());
//                 symbol *arg2 = new symbol(std::to_string(offset), symbolType::literal);
//                 temp = new Quad(OpCode::GET_STRUCT, arg1, arg2, result);
//             }
//             else
//             {
//                 cout << "\033[31mError: \033[0m"
//                      << "Type error" << endl;
//                 exit(1);
//             }
//             tempVar.push_back(result);
//             this->quads.push_back(*temp);
//             return result;
//         }
//     }
//     default:
//         break;
//     }
//     return nullptr;
// }

// Quad *InterMediate::CaculateOp(OpCode op, TreeNode *arg1Node, TreeNode *arg2Node, symbol *result, SymbolTable *symbolTable)
// {
//     Quad *temp;
//     // symbol *result = new symbol(std::to_string(tempVar.size()), symbolType::integer);
//     // tempVar.push_back(result);
//     // result = tempVar.back();

//     if (arg1Node->getNodeType() == ASTNodeType::assignVar && arg2Node->getNodeType() == ASTNodeType::assignVar)
//     {
//         symbol *arg1 = symbolTable->findSymbol(arg1Node->getContent());
//         symbol *arg2 = symbolTable->findSymbol(arg2Node->getContent());
//         temp = new Quad(op, arg1, arg2, result);
//     }
//     else if (arg1Node->getNodeType() == ASTNodeType::assignVar && arg2Node->getNodeType() == ASTNodeType::op)
//     {
//         symbol *arg1 = symbolTable->findSymbol(arg1Node->getContent());
//         symbol *arg2 = GenerateOp((OperatorASTNode *)arg2Node, symbolTable);
//         temp = new Quad(op, arg1, arg2, result);
//     }
//     else if (arg1Node->getNodeType() == ASTNodeType::assignVar && arg2Node->getNodeType() == ASTNodeType::literal)
//     {
//         symbol *arg1 = symbolTable->findSymbol(arg1Node->getContent());
//         int arg2 = std::stoi(arg2Node->getContent());
//         temp = new Quad(op, arg1, arg2, result);
//     }
//     else if (arg1Node->getNodeType() == ASTNodeType::op && arg2Node->getNodeType() == ASTNodeType::assignVar)
//     {
//         symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
//         symbol *arg2 = symbolTable->findSymbol(arg2Node->getContent());
//         temp = new Quad(op, arg1, arg2, result);
//     }
//     else if (arg1Node->getNodeType() == ASTNodeType::op && arg2Node->getNodeType() == ASTNodeType::op)
//     {
//         symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
//         symbol *arg2 = GenerateOp((OperatorASTNode *)arg2Node, symbolTable);
//         temp = new Quad(op, arg1, arg2, result);
//     }
//     else if (arg1Node->getNodeType() == ASTNodeType::op && arg2Node->getNodeType() == ASTNodeType::literal)
//     {
//         symbol *arg1 = GenerateOp((OperatorASTNode *)arg1Node, symbolTable);
//         int arg2 = std::stoi(arg2Node->getContent());
//         temp = new Quad(op, arg1, arg2, result);
//     }

//     else if (arg1Node->getNodeType() == ASTNodeType::literal && arg2Node->getNodeType() == ASTNodeType::assignVar)
//     {
//         int arg1 = std::stoi(arg1Node->getContent());
//         symbol *arg2 = symbolTable->findSymbol(arg2Node->getContent());
//         temp = new Quad(op, arg1, arg2, result);
//     }
//     else if (arg1Node->getNodeType() == ASTNodeType::literal && arg2Node->getNodeType() == ASTNodeType::op)
//     {
//         int arg1 = std::stoi(arg1Node->getContent());
//         symbol *arg2 = GenerateOp((OperatorASTNode *)arg2Node, symbolTable);
//         temp = new Quad(op, arg1, arg2, result);
//     }
//     else if (arg1Node->getNodeType() == ASTNodeType::literal && arg2Node->getNodeType() == ASTNodeType::literal)
//     {
//         int arg1 = std::stoi(arg1Node->getContent());
//         int arg2 = std::stoi(arg2Node->getContent());
//         temp = new Quad(op, arg1, arg2, result);
//     }
//     else
//     {
//         cout << "\033[31mError: \033[0m"
//              << "No match type for" << (int)arg1Node->getNodeType() << "  Content:" << arg1Node->getContent() << endl;
//         exit(1);
//     }
//     return temp;
// }

// void InterMediate::RelopOp(Quad *trueQuad, Quad *falseQuad, OpCode op, TreeNode *arg1Node, TreeNode *arg2Node, SymbolTable *symbolTable)
// {
//     if (arg1Node->getNodeType() == ASTNodeType::assignVar && arg2Node->getNodeType() == ASTNodeType::assignVar)
//     {
//         trueQuad = new Quad(op, symbolTable->findSymbol(arg1Node->getContent()), symbolTable->findSymbol(arg2Node->getContent()), (int)nullptr);
//         falseQuad = new Quad(OpCode::JUMP, (int)nullptr);
//     }
//     else if (arg1Node->getNodeType() == ASTNodeType::assignVar && arg2Node->getNodeType() == ASTNodeType::literal)
//     {
//         trueQuad = new Quad(op, symbolTable->findSymbol(arg1Node->getContent()), std::stoi(arg2Node->getContent()), (int)nullptr);
//         falseQuad = new Quad(OpCode::JUMP, (int)nullptr);
//     }
//     else if (arg1Node->getNodeType() == ASTNodeType::literal && arg2Node->getNodeType() == ASTNodeType::assignVar)
//     {
//         trueQuad = new Quad(op, std::stoi(arg1Node->getContent()), symbolTable->findSymbol(arg2Node->getContent()), (int)nullptr);
//         falseQuad = new Quad(OpCode::JUMP, (int)nullptr);
//     }
//     else if (arg1Node->getNodeType() == ASTNodeType::literal && arg2Node->getNodeType() == ASTNodeType::literal)
//     {
//         trueQuad = new Quad(op, std::stoi(arg1Node->getContent()), std::stoi(arg2Node->getContent()), (int)nullptr);
//         falseQuad = new Quad(OpCode::JUMP, (int)nullptr);
//     }
//     list<int> trueL; // Use size to get the index of true quad will be pushed
//     trueL.push_back(quads.size());
//     this->quads.push_back(*trueQuad);
//     list<int> falseL; // Same as the upper one
//     falseL.push_back(quads.size());
//     this->quads.push_back(*falseQuad);
//     trueList.push(trueL);
//     falseList.push(falseL);
//     return;
// }

// list<int> *InterMediate::makelist(int index)
// {
//     list<int> *jumpList = new list<int>();
//     jumpList->push_back(index);
//     return jumpList;
// }
// list<int> *InterMediate::merge(list<int> *list1, list<int> *list2)
// {
//     list1->merge(*list2);
//     return list1;
// }
// void InterMediate::backpatch(list<int> *backList, int )
// {
//     list<int>::iterator it;
//     for (it = backList->begin(); it != backList->end(); it++)
//     {
//         quads[*it].backpatch();
//     }
//     return;
// }

void InterMediate::printQuads()
{
    // vector<Quad>::iterator it;
    cout << "\t   Operator   \targ1\targ2\tresult" << endl;
    int count = 0;
    for (auto it : this->quads)
    {
        cout << count++ << "\t";
        it.printQuad();
    }
    return;
}