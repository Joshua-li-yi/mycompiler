#include "common.h"
#include "tree.h"
#include <fstream>

extern TreeNode *root;
extern FILE *yyin;
extern int yyparse();

using namespace std;
int main(int argc, char *argv[])
{
    yyin = stdin;
    yyparse();
    if (root != NULL)
    {

        root->genNodeId();
        root->genSymbolTable();
        bool debug = false;
        // bool debug = true;
        if (debug)
            root->printAST();
        cout << endl;
        if (debug)
            GlobalSymTable->printTable();
        root->get_label();
        // 生成中间代码
        root->generate_inter_code();
        if (debug)
            root->printQuads();
        // 生成汇编
        root->gen_code(cout);
    }
    return 0;
}