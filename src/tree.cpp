#include "tree.h"
static int globalNodeId = 0;

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
        TreeNode *tmp = this->sibling->sibling;
        while (tmp != nullptr)
            tmp = tmp->sibling;
        tmp = sibling;
        this->sibling->sibling = tmp;
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
    string type = "";
    string detail = "";
    string childNodeID = "Children: ";
    int int_val;
    bool bool_val;
    string string_val;
    if (t->nodeType == NODE_STMT)
    {
        detail = sType2String(t->stype);
    }
    else if (t->nodeType == NODE_EXPR)
    {
        detail = opType2String(t->optype);
    }
    else if (t->nodeType == NODE_CONST){
        if(t->type==TYPE_INT){
            detail = fmt("TYPE INT%d"%(t->int_val));
        }
    }
    type = nodeType2String(t->nodeType);

    cout <<"lno@"<<t->lineno<<"  "<< "@" << t->nodeID << "  " << type << "  " << detail << "  children:[";
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
        TreeNode *tmp = t;
        while (tmp->sibling != nullptr)
        {
            cout << "@" << tmp->child->nodeID << " ";
            tmp = tmp->sibling;
        }
    }
}

void TreeNode::printAST()
{
    TreeNode *t = this;
    printNodeInfo(t);
    while(t->child != nullptr)
    {
        t = t->child;
        printNodeInfo(t);
        while (t->sibling != nullptr)
        {
            t = t->sibling;
            printNodeInfo(t);
        }
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
        return "=";
        break;
    case OP_PLUS:
        return "+";
    case OP_MINUS:
        return "-";
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
