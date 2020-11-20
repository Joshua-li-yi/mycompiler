#include "tree.h"
static int globalNodeId = 0;
void TreeNode::addChild(TreeNode *child)
{
    this->child = child;
}

void TreeNode::addSibling(TreeNode *sibling)
{
    this->sibling = sibling;
}

TreeNode::TreeNode(int lineno, NodeType type)
{
    this->lineno=lineno;
    this->nodeType=type;
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

    if (t->nodeType == NODE_STMT)
    {
        type = sType2String(t->stype);
    }
    else if (t->nodeType == NODE_EXPR)
    {
    }
    cout << "lno@" << t->lineno << "  "
         << "@" << t->nodeID << "  " << type << "  " << detail << "  children:[";
    printChildrenId();
    cout << "]" << endl;
    // string t = "";
    // cout << "  " << setw(10) << t << endl;
}

void TreeNode::printChildrenId()
{
    if (this->child != nullptr)
    {
        cout << "@" << this->child->nodeID << " ";
        TreeNode *tmp = this;
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
    if (this->child != nullptr)
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
        break;

    default:
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
    default:
        return;
    }
}
