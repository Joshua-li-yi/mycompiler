#include "InterMediate.h"
#include <typeinfo>
#include <cstdio>



// InterMediate::InterMediate(TreeNode *rootNode, SymbolTable *st)
// {
//     this->root = rootNode;
//     this->tmpVarCounter = 0;
//     this->symTabel = st;
// }

// // TODO 表达式生成
// void InterMediate::expr_generate(TreeNode *node)
// {
//     TreeNode *cur = node;
//     if (cur->optype == EXPR_COMBINE)
//     {
//         test(debugflag++);

//         TreeNode *tmp = cur->child;
//         while (tmp)
//         {
//             test(debugflag++);

//             if (tmp->nodeType == NODE_EXPR) // 如果是操作符
//             {
//                 symbol *sym = new symbol();
//                 sym->genTmpVar(this->tmpVarCounter++, unset);
//                 OpObject *tmp_res = new OpObject();
//                 tmp_res->arg.var = sym;
//                 tmp_res->arg_state = arg_var;
//                 test(debugflag++);
//                 test('a');
//                 expr_generate(tmp->child);
//                 expr_generate(tmp->child->sibling);
//                 symbol *tmp_sym1 = GlobalSymTable->lookup("t" + intTostring(this->tmpVarCounter));
//                 symbol *tmp_sym2 = GlobalSymTable->lookup("t" + intTostring(this->tmpVarCounter - 1));
//                 OpObject *tmp_arg1 = new OpObject();
//                 tmp_arg1->arg.var = tmp_sym1;
//                 tmp_arg1->arg_state = arg_var;
//                 test('b');

//                 OpObject *tmp_arg2 = new OpObject();
//                 tmp_arg2->arg.var = tmp_sym2;
//                 tmp_arg2->arg_state = arg_var;
//                 Quad quad_int = Quad(expTypeToOpCode(tmp->optype), tmp_arg1, tmp_arg2, tmp_res);
//                 this->quads.push_back(quad_int);
//             }
//             else if (tmp->nodeType == NODE_CONST) //如果是常量
//             {
//                 test(debugflag++);
//                 test('c');

//                 symbol *sym = new symbol();
//                 sym->genTmpVar(this->tmpVarCounter++, unset);
//                 GlobalSymTable->insert(*sym);

//                 OpObject *tmp_res = new OpObject();
//                 tmp_res->arg.var = sym;
//                 tmp_res->arg_state = arg_var;

//                 OpObject *tmp_arg1 = new OpObject();
//                 tmp_arg1->arg.int_target = tmp->int_val;
//                 tmp_arg1->arg_state = arg_var;
//                 test(debugflag++);

//                 Quad quad_int = Quad(expTypeToOpCode(tmp->optype), tmp_arg1, nullptr, tmp_res);
//                 this->quads.push_back(quad_int);
//             }
//             else if (tmp->nodeType == NODE_VAR)
//             { //如果是变量
//             }
//             tmp = tmp->sibling;
//             test(debugflag++);
//         }
//     }
//     delete cur;
// }

