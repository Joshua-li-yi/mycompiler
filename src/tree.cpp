#include "tree.h"
static int globalNodeId = 0;

void TreeNode::addChild(TreeNode *child)
{
    if (this->child == nullptr)
        this->child = child;
    else{
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
    genNodeId();
}

void TreeNode::genNodeId()
{
    this->nodeID = globalNodeId;
    globalNodeId += 1;
}

void TreeNode::printNodeInfo(TreeNode *t)
{
    // t->genNodeId();
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
    else if (t->nodeType == NODE_TYPE){
        detail = t->type->getTypeInfo();
    }
    else if (t->nodeType == NODE_VAR){
        detail = "var name: " + t->var_name;
    }
    else if(t->nodeType == NODE_CONST){
        string t_type_str = t->type->getTypeInfo();
        if(t_type_str=="int"){
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
        else if(t_type_str == "char"){
            detail = to_string(t->ch_val);
        }
       detail = t_type_str+": "+detail;
    }

    print_type = nodeType2String(t->nodeType);

    cout << "lno@" << t->lineno << "  "
         << "@" << t->nodeID << "  " << print_type << "  " << detail << "  children:[";
    printChildrenId(t);
    cout << "]" << endl;
    // string t = "";
    // cout << "  " << setw(10) << t << endl;
}

void TreeNode::printChildrenId(TreeNode *t)
{
    if (t->child != nullptr)
    {
        cout << "@" << t->child->nodeID << " ";
        TreeNode *tmp = t->child->sibling;
        while (tmp!= nullptr)
        {
            cout << "@" << tmp->nodeID << " ";
            tmp = tmp->sibling;
        }
    }
}
// 先根递归遍历
void TreeNode::printAST(TreeNode *root)
{
    if(!root)
        return;
    printNodeInfo(root);
    for (TreeNode *t = root->child; t; t = t->sibling)
        printAST(t);
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
