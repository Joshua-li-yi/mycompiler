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

void TreeNode::genSymbolTable()
{
    if (!this)
        return;
    TreeNode *cur = this;
    if (cur->nodeType == NODE_STMT && cur->stype == STMT_DECL)
    {
        if (cur->child != nullptr)
        {
            if (cur->child->nodeType == NODE_VAR)
                GlobalVarSymbolTable[cur->child->var_name] = cur->child;
            TreeNode *tmp = cur->child->sibling;
            while (tmp != nullptr)
            {
                if (tmp->nodeType == NODE_VAR)
                    GlobalVarSymbolTable[tmp->var_name] = tmp;
                tmp = tmp->sibling;
            }
        }
    }
    for (TreeNode *t = this->child; t; t = t->sibling)
        t->genSymbolTable();
}

void TreeNode::PrintSymbolTable()
{
    std::map<string, TreeNode *>::iterator iter;
    for (iter = GlobalVarSymbolTable.begin(); iter != GlobalVarSymbolTable.end(); iter++)
    {
        cout<< iter->first<< ", "<<iter->second->nodeID<<" ";
    }
}

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