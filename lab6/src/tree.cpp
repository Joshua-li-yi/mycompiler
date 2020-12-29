#include "tree.h"

void TreeNode::addChild(TreeNode *child)
{
    if (this->child == nullptr)
        this->child = child;
    else
    {
        this->child->addSibling(child);
    }
}

void TreeNode::addSibling(TreeNode *sibling)
{
    if (this->sibling == nullptr)
        this->sibling = sibling;
    else
    {
        TreeNode *tmp = this->sibling;
        while (tmp->sibling != nullptr)
            tmp = tmp->sibling;
        tmp->sibling = sibling;
    }
}

TreeNode::TreeNode(int lineno, NodeType type)
{
    this->lineno = lineno;
    this->nodeType = type;
}

void TreeNode::genNodeId()
{
    static int globalNodeId = 0;
    if (!this)
        return;
    this->nodeID = globalNodeId;
    globalNodeId += 1;
    for (TreeNode *t = this->child; t; t = t->sibling)
        t->genNodeId();
}

void TreeNode::printNodeInfo(TreeNode *t)
{
    string print_type = "";
    string detail = "";
    string childNodeID = "Children: ";
    if (t->nodeType == NODE_STMT)
    {
        detail = sType2String(t->stype);
    }
    else if (t->nodeType == NODE_EXPR)
    {
        detail = "OP: " + opType2String(t->optype);
    }
    else if (t->nodeType == NODE_TYPE)
    {
        detail = t->type->getTypeInfo();
    }
    else if (t->nodeType == NODE_VAR)
    {
        detail = "var name: " + t->var_name;
    }
    else if (t->nodeType == NODE_CONST)
    {
        string t_type_str = t->type->getTypeInfo();
        if (t_type_str == "int")
        {
            detail = to_string(t->int_val);
        }
        else if (t_type_str == "string")
        {
            detail = str_val;
        }
        else if (t_type_str == "bool")
        {
            detail = to_string(t->b_val);
        }
        else if (t_type_str == "double")
        {
            detail = to_string(t->d_val);
        }
        else if (t_type_str == "char")
        {
            detail = to_string(t->ch_val);
        }
        detail = t_type_str + ": " + detail;
    }

    print_type = nodeType2String(t->nodeType);

    cout << "lno@" << t->lineno << "  "
         << "@" << t->nodeID << "  " << print_type << "  " << detail << "  children:[";
    printChildrenId(t);
    cout << "]" << endl;
}

void TreeNode::printChildrenId(TreeNode *t)
{
    if (t->child != nullptr)
    {
        cout << "@" << t->child->nodeID << " ";
        TreeNode *tmp = t->child->sibling;
        while (tmp != nullptr)
        {
            cout << "@" << tmp->nodeID << " ";
            tmp = tmp->sibling;
        }
    }
}
// 先根递归遍历
void TreeNode::printAST()
{
    if (!this)
        return;
    printNodeInfo(this);
    for (TreeNode *t = this->child; t; t = t->sibling)
        t->printAST();
}
symbolType nodeTypetoSymbolType(TreeNode *t)
{
    switch (t->nodeType)
    {
    case NODE_VAR:
    {
        if (t->type == TYPE_INT)
            return integer;

        break;
    }

    default:
        break;
    }
    return unset;
}

void TreeNode::genSymbolTable()
{
    if (!this)
        return;
    TreeNode *cur = this;
    if (cur->nodeType == NODE_STMT && cur->stype == STMT_DECL)
    {
        symbolType tmp_type;
        if (cur->child != nullptr)
        {
            if (cur->child->nodeType == NODE_TYPE)
                tmp_type = nodeTypetoSymbolType(cur->child);
            TreeNode *tmp = cur->child->sibling;
            while (tmp != nullptr)
            {
                if (tmp->nodeType == NODE_VAR)
                {
                    GlobalSymTable->insert(tmp->var_name, tmp->nodeID, tmp_type);
                }
                tmp = tmp->sibling;
            }
        }
    }
    for (TreeNode *t = this->child; t; t = t->sibling)
        t->genSymbolTable();
}

// void TreeNode::PrintSymbolTable()
// {
//     std::map<string, TreeNode *>::iterator iter;
//     for (iter = GlobalVarSymbolTable.begin(); iter != GlobalVarSymbolTable.end(); iter++)
//     {
//         cout << iter->first << ", " << iter->second->nodeID << " ";
//     }
// }

// You can output more info...
void TreeNode::printSpecialInfo()
{
    switch (this->nodeType)
    {
    case NODE_CONST:
        break;
    case NODE_VAR:
        break;
    case NODE_EXPR:
        break;
    case NODE_STMT:
        break;
    case NODE_TYPE:
        break;
    default:
        break;
    }
}

string TreeNode::sType2String(StmtType type)
{
    string displayStype;
    switch (type)
    {
    case STMT_SKIP:
        return "STMT SKIP";
    case STMT_DECL:
        return "STMT DECL";
    case STMT_IF:
        return "STMT IF";
    case STMT_WHILE:
        return "STMT WHILE";
    case STMT_ELSE:
        return "STMT ELSE";
    case STMT_ASSIGN:
        return "=";
    case STMT_FOR:
        return "STMT FOR";
    case STMT_FUN_DECL:
        return "STMT FUN DECL";
    case STMT_FUN_DEF:
        return "STMT FUN DEF";
    case STMT_FUN_CALL:
        return "STMT FUN CALL";
    case STMT_RETURN:
        return "STMT RETURN";
    case STMT_MIN_ASSIGN:
        return "-=";
    case STMT_PLUS_ASSIGN:
        return "+=";
    case STMT_TIM_ASSIGN:
        return "*=";
    case STMT_MOD_ASSIGN:
        return "%=";
    case STMT_DIV_ASSIGN:
        return "/=";
    case STMT_SCANF:
        return "scanf";
    case STMT_PRINTF:
        return "printf";
    case STMT_DOMAIN:
        return "STMT DOMAIN";
    default:
        return "???";
        break;
    }
    return displayStype;
}

string TreeNode::nodeType2String(NodeType type)
{
    switch (type)
    {
    case NODE_STMT:
        return "NODE STMT";
    case NODE_EXPR:
        return "NODE EXPR";
    case NODE_PROG:
        return "NODE PROG";
    case NODE_TYPE:
        return "NODE TYPE";
    case NODE_VAR:
        return "NODE VAR";
    case NODE_CONST:
        return "NODE CONST";
    case NODE_MAIN:
        return "main";
    default:
        return "???";
        break;
    }
}

string TreeNode::opType2String(OperatorType type)
{
    switch (type)
    {
    case OP_EQU:
        return "==";
        break;
    case OP_PLUS:
        return "+";
    case OP_MINUS:
        return "-";
    case OP_TIMES:
        return "*";
    case OP_DIVIDE:
        return "/";
    case OP_MOD:
        return "%";
    case OP_AND:
        return "&";
    case OP_OR:
        return "|";
    case OP_NOT:
        return "~";
    case OP_PPLUS:
        return "++";
    case OP_MMINUS:
        return "--";
    case OP_NEQ:
        return "!=";
    case OP_GTR:
        return ">";
    case OP_LSS:
        return "<";
    case OP_GEQ:
        return ">=";
    case OP_LEQ:
        return "<=";
    case OP_LOGICAL_NOT:
        return "!";
    case OP_LOGICAL_AND:
        return "&&";
    case OP_LOGICAL_OR:
        return "||";
    default:
        return "???";
        break;
    }
}

TreeNode *expNode(TreeNode *op, TreeNode *operand1, TreeNode *operand2)
{
    TreeNode *opt = op;
    opt->addChild(operand1);
    opt->addChild(operand2);
    return opt;
}

TreeNode *forNode(int lno, TreeNode *exp1, TreeNode *exp2, TreeNode *exp3, TreeNode *stmt)
{
    TreeNode *node = new TreeNode(lno, NODE_STMT);
    node->stype = STMT_FOR;
    TreeNode *node2 = new TreeNode(lno, NODE_STMT);
    node2->stype = STMT_DOMAIN;
    node2->addChild(exp1);
    node2->addChild(exp2);
    node2->addChild(exp3);
    node2->addChild(stmt);
    node->addChild(node2);
    return node;
}

// extern int lineno;
// extern symbol_table symtbl;

// tree parse_tree;

// void Node::output(void)
// {
//     // write your own code to print the parser tree
//     cout << endl;
// }

// void tree::type_check(Node *t)
// {
//     // type check, write your own code here

//     if (t->kind == STMT_NODE)
//     {
//         if (t->kind_kind == WHILE_STMT)
//             if (t->children[0]->type != Boolean)
//             {
//                 cerr << "Bad boolean type at line: " << t->lineno << endl;
//             }
//             else
//                 return;
//     }
//     /* ... */
//     return;
// }

// void tree::get_temp_var(Node *t)
// {
//     if (t->kind != EXPR_NODE)
//         return;
//     if (t->attr.op < PLUS || t->attr.op > OVER)
//         return;

//     Node *arg1 = t->children[0];
//     Node *arg2 = t->children[1];

//     if (arg1->kind_kind == OP_EXPR)
//         temp_var_seq--;
//     if (arg2 && arg2->kind_kind == OP_EXPR)
//         tree::temp_var_seq--;
//     t->temp_var = tree::temp_var_seq;
//     tree::temp_var_seq++;
// }

// Node *tree::NewRoot(int kind, int kind_kind, NodeAttr attr, int type,
//                     Node *child1, Node *child2, Node *child3, Node *child4)
// {
//     Node *t = new Node;

//     if (NULL == t)
//         cerr << "Out of memory at line %d\n"
//              << lineno;
//     else
//     {
//         t->kind = kind;
//         t->kind_kind = kind_kind;
//         t->attr = attr;
//         t->type = type;
//         t->children[0] = child1;
//         t->children[1] = child2;
//         t->children[2] = child3;
//         t->children[3] = child4;
//         t->lineno = lineno;
//         t->seq = tree::node_seq++;
//         t->sibling = NULL;
//         t->label.begin_label = "";
//         t->label.next_label = "";
//         t->label.true_label = "";
//         t->label.false_label = "";
//         root = t;
//         type_check(t);   // type check
//         get_temp_var(t); // generate temp veriables
//     }
//     return t;
// }

// string tree::new_label(void)
// {
//     char tmp[20];

//     sprintf(tmp, "@%d", tree::label_seq);
//     tree::label_seq++;
//     return tmp;
// }

// void tree::stmt_get_label(Node *t)
// {
//     switch (t->kind_kind)
//     {
//     case COMP_STMT:
//     {
//         Node *last;
//         Node *p;
//         for (p = t->children[0]; p->kind == DECL_NODE; p = p->sibling)
//             ;

//         p->label.begin_label = t->label.begin_label;
//         for (; p; p = p->sibling)
//         {
//             last = p;
//             recursive_get_label(p);
//         }

//         t->label.next_label = last->label.next_label;
//         if (t->sibling)
//             t->sibling->label.begin_label = t->label.next_label;
//     }
//     break;

//     case WHILE_STMT:
//     {
//         Node *e = t->children[0];
//         Node *s = t->children[1];

//         if (t->label.begin_label == "")
//             t->label.begin_label = new_label();
//         s->label.next_label = t->label.begin_label;

//         s->label.begin_label = e->label.true_label = new_label();

//         if (t->label.next_label == "")
//             t->label.next_label = new_label();
//         e->label.false_label = t->label.next_label;
//         if (t->sibling)
//             t->sibling->label.begin_label = t->label.next_label;

//         recursive_get_label(e);
//         recursive_get_label(s);
//     }
//         /* ... */
//     }
// }

// void tree::expr_get_label(Node *t)
// {
//     if (t->type != Boolean)
//         return;

//     Node *e1 = t->children[0];
//     Node *e2 = t->children[1];
//     switch (t->attr.op)
//     {
//     case AND:
//         e1->label.true_label = new_label();
//         e2->label.true_label = t->label.true_label;
//         e1->label.false_label = e2->label.false_label = t->label.false_label;
//         break;

//     case OR:
//         break;
//         /* ... */
//     }
//     if (e1)
//         recursive_get_label(e1);
//     if (e2)
//         recursive_get_label(e2);
// }

// void tree::recursive_get_label(Node *t)
// {
//     if (t->kind == STMT_NODE)
//         stmt_get_label(t);
//     else if (t->kind == EXPR_NODE)
//         expr_get_label(t);
// }

// void tree::get_label(void)
// {
//     Node *p = root;

//     p->label.begin_label = "_start";
//     recursive_get_label(p);
// }

// void tree::gen_header(ostream &out)
// {
//     out << "# your asm code header here" << endl;
//     /*your code here*/
// }

// void tree::gen_decl(ostream &out, Node *t)
// {
//     out << endl
//         << "# define your veriables and temp veriables here" << endl;
//     out << "\t.bss" << endl;
//     for (; t->kind == DECL_NODE; t = t->sibling)
//     {
//         for (Node *p = t->children[1]; p; p = p->sibling)
//             if (p->type == Integer)
//                 out << "_" << symtbl.getname(p->attr.symtbl_seq) << ":" << endl;
//         out << "\t.zero\t4" << endl;
//         out << "\t.align\t4" << endl;
//     }

//     for (int i = 0; i < temp_var_seq; i++)
//     {
//         out << "t" << i << ":" << endl;
//         out << "\t.zero\t4" << endl;
//         out << "\t.align\t4" << endl;
//     }
// }

// void tree::stmt_gen_code(ostream &out, Node *t)
// {
//     if (t->kind_kind == COMP_STMT)
//     {
//         for (int i = 0; t->children[i]; i++)
//         {
//             recursive_gen_code(out, t->children[i]);
//             for (Node *p = t->children[i]->sibling; p; p = p->sibling)
//                 recursive_gen_code(out, p);
//         }
//     }
//     else if (t->kind_kind == WHILE_STMT)
//     {
//         if (t->label.begin_label != "")
//             out << t->label.begin_label << ":" << endl;
//         recursive_gen_code(out, t->children[0]);
//         recursive_gen_code(out, t->children[1]);
//         out << "\tjmp " << t->label.begin_label << endl;
//     }
//     else if (t->kind_kind == PRINT_STMT)
//     {
//         /* ... */
//     }
//     /* ... */
// }

// void tree::expr_gen_code(ostream &out, Node *t)
// {
//     Node *e1 = t->children[0];
//     Node *e2 = t->children[1];
//     switch (t->attr.op)
//     {
//     case ASSIGN:
//         break;

//     case PLUS:
//         out << "\tmovl $";
//         if (e1->kind_kind == ID_EXPR)
//             out << "_" << symtbl.getname(e1->attr.symtbl_seq);
//         else if (e1->kind_kind == CONST_EXPR)
//             out << e1->attr.vali;
//         else
//             out << "t" << e1->temp_var;
//         out << ", %eax" << endl;
//         out << "\taddl $";
//         if (e2->kind_kind == ID_EXPR)
//             out << "_" << symtbl.getname(e2->attr.symtbl_seq);
//         else if (e2->kind_kind == CONST_EXPR)
//             out << e2->attr.vali;
//         else
//             out << "t" << e2->temp_var;
//         out << ", %eax" << endl;
//         out << "\tmovl %eax, $t" << t->temp_var << endl;
//         break;
//     case AND:
//         out << "\t# your own code of AND operation here" << endl;
//         out << "\tjl @1" << endl;
//         out << "\t# your asm code of AND operation end" << endl;
//     case LT:
//         break;
//         /* ... */
//     }
// }

// void tree::recursive_gen_code(ostream &out, Node *t)
// {
//     if (t->kind == STMT_NODE)
//     {
//         stmt_gen_code(out, t);
//     }
//     else if (t->kind == EXPR_NODE && t->kind_kind == OP_EXPR)
//     {
//         expr_gen_code(out, t);
//     }
// }

// void tree::gen_code(ostream &out)
// {
//     gen_header(out);
//     Node *p = root->children[0];
//     if (p->kind == DECL_NODE)
//         gen_decl(out, p);
//     out << endl
//         << endl
//         << "# your asm code here" << endl;
//     out << "\t.text" << endl;
//     out << "\t.globl _start" << endl;
//     recursive_gen_code(out, root);
//     if (root->label.next_label != "")
//         out << root->label.next_label << ":" << endl;
//     out << "\tret" << endl;
// }
