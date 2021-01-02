#include "tree.h"

vector<Quad> quads;
stack<OpObject *> tmpVarStack;
int label_seq = 0;
int tmp_string_seq = 0;
int tmpVarCounter = 0;
OpCode
expTypeToOpCode(OperatorType t)
{
    switch (t)
    {
    case OP_PLUS:
        return OpCode_PLUS;
    case OP_DIVIDE:
        return OpCode_DIV;
    case OP_MINUS:
        return OpCode_MINUS;
    case OP_TIMES:
        return OpCode_TIMES;

    case OP_CITE:
        return OpCode_CITE;
    case OP_POINTER:
        return OpCode_POINTER;
    case OP_GTR:
        return OpCode_GTR;
    case OP_GEQ:
        return OpCode_GEQ;
    case OP_EQU:
        return OpCode_EQU;
    case OP_NEQ:
        return OpCode_NEQ;
    case OP_LSS:
        return OpCode_LSS;
    case OP_LEQ:
        return OpCode_LEQ;
    case OP_AND:
        return OpCode_AND;
    case OP_LOGICAL_AND:
        return OpCode_LOGICAL_AND;
    case OP_OR:
        return OpCode_OR;
    case OP_LOGICAL_OR:
        return OpCode_LOGICAL_OR;
    case OP_NOT:
        return OpCode_NOT;
    case OP_LOGICAL_NOT:
        return OpCode_LOGICAL_NOT;
    default:
        break;
    }
}

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
    if ((t->nodeType == NODE_CONST) || (t->nodeType == NODE_VAR))
    {
        if (t->type == TYPE_INT)
            return Integer;
        else if (t->type == TYPE_BOOL)
            return Boolean;
        else if (t->type == TYPE_CHAR)
            return Symbol_char;
        else if (t->type == TYPE_STRING)
            return Symbol_char_star;
        else if (t->type == TYPE_POINT)
            return Pointer;
        else if (t->type == TYPE_CITE)
            return Cite;
        else if (t->type == TYPE_VOID)
            return Void;
        else if (t->type == TYPE_DOUBLE)
            return Double;
    }
    if (t->stype == STMT_FUN_DEF)
    {
        return Function;
    }
}

void TreeNode::genSymbolTable()
{
    if (!this)
        return;
    TreeNode *cur = this;
    if ((cur->nodeType == NODE_STMT) && ((cur->stype == STMT_DECL) || (cur->stype == STMT_VAR_INIT)))
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
    else if ((cur->nodeType == NODE_STMT) && ((cur->stype == STMT_PRINTF) || (cur->stype == STMT_SCANF)))
    {
        TreeNode *tmp = cur->child->child;
        if ((tmp != nullptr) && (tmp->nodeType == NODE_CONST) && (tmp->type->getTypeInfo() == "string"))
        {
            symbol tmp_s;
            tmp_s.genTmpString(tmp_string_seq++, tmp->nodeID, tmp->str_val);
            GlobalSymTable->insert(tmp_s);
        }
    }
    else if (cur->nodeType == NODE_MAIN) // 主函数
    {
        GlobalSymTable->insert("main", cur->nodeID, Function);
    }
    for (TreeNode *t = this->child; t; t = t->sibling)
        t->genSymbolTable();
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
    case STMT_VAR_INIT:
        return "STMT VAR INIT";
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
    case EXPR_COMBINE:
        return "EXPR combine";
    case OP_CITE:
        return "&";
    case OP_POINTER:
        return "*";
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

void TreeNode::expr_inter_code_generate()
{
    if ((this->child != nullptr) && (this->child->nodeType == NODE_EXPR) && (this->child->optype != EXPR_COMBINE))
        this->child->expr_inter_code_generate();
    if ((this->child->sibling != nullptr) && (this->child->sibling->nodeType == NODE_EXPR) && (this->child->sibling->optype != EXPR_COMBINE))
        this->child->sibling->expr_inter_code_generate();

    TreeNode *cur = this;
    if ((cur->nodeType == NODE_EXPR) && (cur->optype == EXPR_COMBINE) && (cur->child->child == nullptr))
    {
        symbol *sym = new symbol();
        sym->genTmpVar(tmpVarCounter++, this->nodeID, Unset);
        TmpSymTable->insert(*sym);

        OpObject *tmp_res = new OpObject();
        tmp_res->arg.var = sym;
        tmp_res->arg_state = arg_var;
        symbol *tmp_sym1;
        OpObject *tmp_arg1 = new OpObject();
        TreeNode *tmp = cur->child;
        if (tmp->nodeType == NODE_VAR)
        {

            tmp_sym1 = GlobalSymTable->lookup(tmp->var_name);
            tmp_arg1->arg.var = tmp_sym1;
            tmp_arg1->arg_state = arg_var;
        }
        else if (tmp->nodeType == NODE_CONST)
        {
            if (tmp->type->getTypeInfo() == "int")
            {
                tmp_arg1->arg.int_target = tmp->int_val;
                tmp_arg1->arg_state = arg_int;
            }
        }

        Quad quad_int = Quad(OpCode_ASSIGN, tmp_arg1, nullptr, tmp_res);
        quads.push_back(quad_int);

        tmpVarStack.push(tmp_res);
    }
    if ((cur->nodeType == NODE_EXPR) && (cur->optype != EXPR_COMBINE))
    {
        symbol *sym = new symbol();
        sym->genTmpVar(tmpVarCounter++, this->nodeID, Unset);
        TmpSymTable->insert(*sym);

        OpObject *tmp_res = new OpObject();
        tmp_res->arg.var = sym;
        tmp_res->arg_state = arg_var;

        symbol *tmp_sym1;
        symbol *tmp_sym2;
        OpObject *tmp_arg1 = new OpObject();
        OpObject *tmp_arg2 = new OpObject();
        TreeNode *tmp = cur->child;
        if (tmp)
        {
            if (tmp->nodeType == NODE_VAR)
            {

                tmp_sym1 = GlobalSymTable->lookup(tmp->var_name);
                tmp_arg1->arg.var = tmp_sym1;
                tmp_arg1->arg_state = arg_var;
            }
            else if (tmp->nodeType == NODE_CONST)
            {
                tmp_arg1->arg.int_target = tmp->int_val;
                tmp_arg1->arg_state = arg_int;
            }
            else
            {
                tmp_arg1 = tmpVarStack.top();
                tmpVarStack.pop();
            }
        }
        else
        {
            tmp_arg1 = nullptr;
        }
        if (tmp->sibling)
        {
            if (tmp->sibling->nodeType == NODE_VAR)
            {
                tmp_sym2 = GlobalSymTable->lookup(tmp->sibling->var_name);
                tmp_arg2->arg.var = tmp_sym2;
                tmp_arg2->arg_state = arg_var;
            }
            else if (tmp->sibling->nodeType == NODE_CONST)
            {
                tmp_arg2->arg.int_target = tmp->sibling->int_val;
                tmp_arg2->arg_state = arg_int;
            }
            else
            {
                tmp_arg2 = tmpVarStack.top();
                tmpVarStack.pop();
            }
        }
        else
        {
            tmp_arg2 = nullptr;
        }

        // if ((cur->optype == OP_CITE) || (cur->optype == OP_POINTER))
        // {
        //     Quad quad_int = Quad(expTypeToOpCode(cur->optype), tmp_arg1, tmp_arg2, tmp_res);
        //     quads.push_back(quad_int);
        // }
        // else
        // {
        Quad quad_int = Quad(expTypeToOpCode(cur->optype), tmp_arg1, tmp_arg2, tmp_res);
        quads.push_back(quad_int);
        // }

        tmpVarStack.push(tmp_res);
    }
}

void TreeNode::generate_inter_code()
{
    TreeNode *cur = this;
    if (this == nullptr)
    {
        cout << "nullptr" << endl;
        return;
    }
    if (this->getNodeType() == NODE_STMT)
    {

        switch (cur->stype)
        {

        case STMT_DECL:
        {
            symbolType tmp_type;
            if (cur->child != nullptr)
            {
                // TODO 这块儿类型有问题
                if (cur->child->nodeType == NODE_TYPE)
                    tmp_type = nodeTypetoSymbolType(cur->child);

                TreeNode *tmp = cur->child->sibling;
                while (tmp != nullptr)
                {
                    if (tmp->nodeType == NODE_VAR)
                    {
                        struct symbol *sym = GlobalSymTable->lookup(tmp->var_name);

                        OpObject *tmp_ob = new OpObject();
                        tmp_ob->arg_state = arg_var;
                        tmp_ob->arg.var = sym;
                        Quad quad_int = Quad(OpCode_VAR_DECL, nullptr, nullptr, tmp_ob);
                        quads.push_back(quad_int);
                    }
                    tmp = tmp->sibling;
                }
            }
            for (TreeNode *t = this->child; t; t = t->sibling)
                t->generate_inter_code();
            break;
        }
        case STMT_ASSIGN:
        {
            symbolType tmp_type;
            if (cur->child != nullptr)
            {
                symbol *tmp_res;
                if (cur->child->nodeType == NODE_VAR)
                    tmp_res = GlobalSymTable->lookup(cur->child->var_name);
                OpObject *tmp_ob3 = new OpObject();
                tmp_ob3->arg.var = tmp_res;
                tmp_ob3->arg_state = arg_var;

                OpObject *tmp_ob1 = new OpObject();
                TreeNode *tmp = cur->child->sibling;
                if (tmp->optype == EXPR_COMBINE)
                    tmp->expr_inter_code_generate();
                tmp_ob1 = tmpVarStack.top();
                tmpVarStack.pop();

                Quad quad_int = Quad(OpCode_ASSIGN, tmp_ob1, nullptr, tmp_ob3);
                quads.push_back(quad_int);
            }
            for (TreeNode *t = this->child; t; t = t->sibling)
                t->generate_inter_code();
            break;
        }
        case STMT_MIN_ASSIGN:
        {
            symbolType tmp_type;
            if (cur->child != nullptr)
            {
                symbol *tmp_res;
                if (cur->child->nodeType == NODE_VAR)
                    tmp_res = GlobalSymTable->lookup(cur->child->var_name);
                OpObject *tmp_ob3 = new OpObject();
                tmp_ob3->arg.var = tmp_res;
                tmp_ob3->arg_state = arg_var;

                OpObject *tmp_ob1 = new OpObject();
                TreeNode *tmp = cur->child->sibling;
                if ((tmp->optype == EXPR_COMBINE) && (tmp->child) && (tmp->child->type->getTypeInfo() == "int"))
                {
                    tmp_ob1->arg_state = arg_int;
                    tmp_ob1->arg.int_target = tmp->child->int_val;
                }

                Quad quad_int = Quad(OpCode_MINUS, tmp_ob3, tmp_ob1, tmp_ob3);
                quads.push_back(quad_int);
            }
            for (TreeNode *t = this->child; t; t = t->sibling)
                t->generate_inter_code();
            break;
        }
        case STMT_PLUS_ASSIGN:
        {
            symbolType tmp_type;
            if (cur->child != nullptr)
            {
                symbol *tmp_res;
                if (cur->child->nodeType == NODE_VAR)
                    tmp_res = GlobalSymTable->lookup(cur->child->var_name);
                OpObject *tmp_ob3 = new OpObject();
                tmp_ob3->arg.var = tmp_res;
                tmp_ob3->arg_state = arg_var;

                OpObject *tmp_ob1 = new OpObject();
                TreeNode *tmp = cur->child->sibling;
                if ((tmp->optype == EXPR_COMBINE) && (tmp->child) && (tmp->child->type->getTypeInfo() == "int"))
                {
                    tmp_ob1->arg_state = arg_int;
                    tmp_ob1->arg.int_target = tmp->child->int_val;
                }

                Quad quad_int = Quad(OpCode_PLUS, tmp_ob3, tmp_ob1, tmp_ob3);
                quads.push_back(quad_int);
            }

            for (TreeNode *t = this->child; t; t = t->sibling)
                t->generate_inter_code();
            break;
        }
        case STMT_MOD_ASSIGN:
        {
            symbolType tmp_type;
            if (cur->child != nullptr)
            {
                symbol *tmp_res;
                if (cur->child->nodeType == NODE_VAR)
                    tmp_res = GlobalSymTable->lookup(cur->child->var_name);
                OpObject *tmp_ob3 = new OpObject();
                tmp_ob3->arg.var = tmp_res;
                tmp_ob3->arg_state = arg_var;

                OpObject *tmp_ob1 = new OpObject();
                TreeNode *tmp = cur->child->sibling;
                if (tmp->optype == EXPR_COMBINE)
                    tmp->expr_inter_code_generate();
                tmp_ob1 = tmpVarStack.top();
                tmpVarStack.pop();

                Quad quad_int = Quad(OpCode_MOD, tmp_ob3, tmp_ob1, tmp_ob3);
                quads.push_back(quad_int);
            }
            for (TreeNode *t = this->child; t; t = t->sibling)
                t->generate_inter_code();
            break;
        }
        case STMT_DIV_ASSIGN:
        {
            symbolType tmp_type;
            if (cur->child != nullptr)
            {
                symbol *tmp_res;
                if (cur->child->nodeType == NODE_VAR)
                    tmp_res = GlobalSymTable->lookup(cur->child->var_name);
                OpObject *tmp_ob3 = new OpObject();
                tmp_ob3->arg.var = tmp_res;
                tmp_ob3->arg_state = arg_var;

                OpObject *tmp_ob1 = new OpObject();
                TreeNode *tmp = cur->child->sibling;
                if (tmp->optype == EXPR_COMBINE)
                    tmp->expr_inter_code_generate();
                tmp_ob1 = tmpVarStack.top();
                tmpVarStack.pop();

                Quad quad_int = Quad(OpCode_DIV, tmp_ob3, tmp_ob1, tmp_ob3);
                quads.push_back(quad_int);
            }
            for (TreeNode *t = this->child; t; t = t->sibling)
                t->generate_inter_code();
            break;
        }
        case STMT_TIM_ASSIGN:
        {
            symbolType tmp_type;
            if (cur->child != nullptr)
            {
                symbol *tmp_res;
                if (cur->child->nodeType == NODE_VAR)
                    tmp_res = GlobalSymTable->lookup(cur->child->var_name);
                OpObject *tmp_ob3 = new OpObject();
                tmp_ob3->arg.var = tmp_res;
                tmp_ob3->arg_state = arg_var;

                OpObject *tmp_ob1 = new OpObject();
                TreeNode *tmp = cur->child->sibling;
                if (tmp->optype == EXPR_COMBINE)
                    tmp->expr_inter_code_generate();
                tmp_ob1 = tmpVarStack.top();
                tmpVarStack.pop();

                Quad quad_int = Quad(OpCode_TIMES, tmp_ob3, tmp_ob1, tmp_ob3);
                quads.push_back(quad_int);
            }
            for (TreeNode *t = this->child; t; t = t->sibling)
                t->generate_inter_code();
            break;
        }
        case STMT_VAR_INIT:
        {
            TreeNode *tmp = cur->child->sibling;
            symbol *tmp_res;
            if (tmp->nodeType == NODE_VAR)
                tmp_res = GlobalSymTable->lookup(tmp->var_name);
            OpObject *tmp_ob3 = new OpObject();
            tmp_ob3->arg.var = tmp_res;
            tmp_ob3->arg_state = arg_var;
            OpObject *tmp_ob1 = new OpObject();
            tmp = tmp->sibling;

            if (tmp->optype == EXPR_COMBINE)
                tmp->expr_inter_code_generate();
            tmp_ob1 = tmpVarStack.top();
            tmpVarStack.pop();

            if ((cur->child->child != nullptr) && (cur->child->child->optype == OP_POINTER))
            {
                Quad quad_int = Quad(OpCode_POINTER, tmp_ob1, nullptr, tmp_ob3);
                quads.push_back(quad_int);
            }
            else
            {
                Quad quad_int = Quad(OpCode_VAR_DECL, tmp_ob1, nullptr, tmp_ob3);
                quads.push_back(quad_int);
            }
            for (TreeNode *t = this->child; t; t = t->sibling)
                t->generate_inter_code();
            break;
        }
        case STMT_IF:
        {
            // if的label
            OpObject *tmp_if_next = new OpObject();
            if (!this->label.next_label.empty())
            {
                tmp_if_next->arg_state = arg_char_star;
                string tmp_s = this->label.next_label;
                char *strc = new char[strlen(tmp_s.c_str()) + 1];
                strcpy(strc, tmp_s.c_str());
                tmp_if_next->arg.char_star_target = strc;
            }
            // // else的label
            OpObject *tmp_else_next = new OpObject();
            if (this->sibling->stype == STMT_ELSE)
            {
                if (!this->sibling->label.next_label.empty())
                {
                    tmp_else_next->arg_state = arg_char_star;

                    string tmp_s = this->sibling->label.next_label;
                    char *strc = new char[strlen(tmp_s.c_str()) + 1];
                    strcpy(strc, tmp_s.c_str());
                    tmp_else_next->arg.char_star_target = strc;
                }
            }
            // 生成表达式
            this->child->expr_inter_code_generate();
            OpObject *tmp_ob1 = new OpObject();
            tmp_ob1 = tmpVarStack.top();
            tmpVarStack.pop();
            // if
            Quad quad_if = Quad(OpCode_IF, nullptr, nullptr, tmp_ob1);
            quads.push_back(quad_if);
            // jle if next
            Quad quad_int = Quad(OpCode_JLE, nullptr, nullptr, tmp_if_next);
            quads.push_back(quad_int);
            // 生成if 中的语句
            cur = this->child->sibling;
            this->child->sibling->generate_inter_code();
            // // else的label
            if (this->sibling->stype == STMT_ELSE)
            {
                if (!this->sibling->label.next_label.empty())
                {
                    // jump else next
                    Quad quad_int = Quad(OpCode_JUMP, nullptr, nullptr, tmp_else_next);
                    quads.push_back(quad_int);
                }
            }
            // if next
            Quad quad_int3 = Quad(OpCode_LABEL, nullptr, nullptr, tmp_if_next);
            quads.push_back(quad_int3);

            break;
        }
        case STMT_ELSE:
        {
            this->child->generate_inter_code();
            if (!this->label.next_label.empty())
            {
                OpObject *tmp_else_next = new OpObject();
                tmp_else_next->arg_state = arg_char_star;
                string tmp_s = this->label.next_label;
                char *strc = new char[strlen(tmp_s.c_str()) + 1];
                strcpy(strc, tmp_s.c_str());
                tmp_else_next->arg.char_star_target = strc;
                // else的label
                Quad quad_int = Quad(OpCode_LABEL, nullptr, nullptr, tmp_else_next);
                quads.push_back(quad_int);
            }
            break;
        }
        case STMT_WHILE:
        {
            OpObject *tmp_begin = new OpObject();
            // if开始的label
            if (!this->label.begin_label.empty())
            {
                OpObject *tmp_res = new OpObject();
                tmp_res->arg_state = arg_char_star;
                string tmp_s = this->label.begin_label + ":";
                char *strc = new char[strlen(tmp_s.c_str()) + 1];
                strcpy(strc, tmp_s.c_str());
                tmp_res->arg.char_star_target = strc;
                tmp_begin = tmp_res;
                Quad quad_int = Quad(OpCode_LABEL, nullptr, nullptr, tmp_res);
                quads.push_back(quad_int);
            }

            // 生成表达式
            this->child->expr_inter_code_generate();

            OpObject *tmp_ob1 = new OpObject();
            tmp_ob1 = tmpVarStack.top();
            tmpVarStack.pop();
            // 开始if
            if (!this->child->label.true_label.empty())
            {
                OpObject *tmp_res = new OpObject();
                tmp_res->arg_state = arg_char_star;

                string tmp_s = this->child->label.true_label + ":";
                char *strc = new char[strlen(tmp_s.c_str()) + 1];
                strcpy(strc, tmp_s.c_str());
                tmp_res->arg.char_star_target = strc;
                // TODO 跳到while之后
                Quad quad_int2 = Quad(OpCode_IF, tmp_ob1, nullptr, tmp_begin);
                quads.push_back(quad_int2);

                Quad quad_int = Quad(OpCode_LABEL, nullptr, nullptr, tmp_res);
                quads.push_back(quad_int);
            }
            // 生成if 中的语句
            this->child->sibling->generate_inter_code();

            Quad quad_int = Quad(OpCode_JUMP, nullptr, nullptr, tmp_begin);
            quads.push_back(quad_int);
            break;
        }
        case STMT_RETURN:
        {
            if ((cur->child->child->nodeType == NODE_CONST) && (cur->child->child->int_val == 0))
            {
                Quad quad_int = Quad(OpCode_RETURN, nullptr, nullptr, nullptr);
                quads.push_back(quad_int);
                break;
            }
            if (cur->child != nullptr)
            {
                OpObject *tmp_ob1 = new OpObject();
                TreeNode *tmp = cur->child;
                if (tmp->optype == EXPR_COMBINE)
                    tmp->expr_inter_code_generate();
                tmp_ob1 = tmpVarStack.top();

                tmpVarStack.pop();

                Quad quad_int = Quad(OpCode_RETURN, nullptr, nullptr, tmp_ob1);
                quads.push_back(quad_int);
            }
            for (TreeNode *t = this->child; t; t = t->sibling)
                t->generate_inter_code();
            break;
        }
        case STMT_PRINTF:
        case STMT_SCANF:
        {
            TreeNode *tmp = cur->child->sibling;
            while (tmp != nullptr)
            {
                // 生成表达式
                if ((tmp->nodeType == NODE_EXPR) && (tmp->optype == EXPR_COMBINE))
                    tmp->expr_inter_code_generate();
                tmp = tmp->sibling;
            }
            while (!tmpVarStack.empty())
            {
                OpObject *tmp_ob1 = new OpObject();
                tmp_ob1 = tmpVarStack.top();
                tmpVarStack.pop();
                Quad quad_int = Quad(OpCode_PUSH, nullptr, nullptr, tmp_ob1);
                quads.push_back(quad_int);
            }

            tmp = cur->child->child;
            if ((tmp) && (tmp->nodeType == NODE_CONST) && (tmp->type->getTypeInfo() == "string"))
            {
                OpObject *tmp_res = new OpObject();
                tmp_res->arg.var = GlobalSymTable->get_symbol_from_token(tmp->nodeID);
                tmp_res->arg_state = arg_var;
                Quad quad_int = Quad(OpCode_PUSH, nullptr, nullptr, tmp_res);
                quads.push_back(quad_int);
            }

            if (cur->stype == STMT_PRINTF)
            {
                Quad quad_int = Quad(OpCode_PRINTF, nullptr, nullptr, nullptr);
                quads.push_back(quad_int);
            }
            else if (cur->stype == STMT_SCANF)
            {
                Quad quad_int = Quad(OpCode_SCANF, nullptr, nullptr, nullptr);
                quads.push_back(quad_int);
            }
            for (TreeNode *t = this->child; t; t = t->sibling)
                t->generate_inter_code();
            break;
        }

        default:
        {
            for (TreeNode *t = this->child; t; t = t->sibling)
                t->generate_inter_code();
            break;
        }
        }
    }
    else if (this->getNodeType() == NODE_MAIN)
    {
        OpObject *tmp_main = new OpObject();
        tmp_main->arg_state = arg_var;
        tmp_main->arg.var = GlobalSymTable->lookup("main");
        Quad quad_int = Quad(OpCode_MAIN, nullptr, nullptr, tmp_main);
        quads.push_back(quad_int);
        for (TreeNode *t = this->child; t; t = t->sibling)
            t->generate_inter_code();
    }
    else
    {

        for (TreeNode *t = this->child; t; t = t->sibling)
            t->generate_inter_code();
    }
}

void TreeNode::printQuads()
{
    cout << "\t   Operator   \targ1\targ2\tresult" << endl;
    int count = 0;
    for (auto it : quads)
    {
        cout << count++ << tableSym;
        it.printQuad();
        cout << endl;
    }
    return;
}

string TreeNode::new_label()
{
    char tmp[20];
    sprintf(tmp, ".L%d", label_seq);
    label_seq++;
    return tmp;
}

void TreeNode::stmt_get_label()
{
    switch (this->stype)
    {
        //  case COMP_STMT:
        //  {
        //    Node *last;
        //    Node *p;
        //    for (p = t->children[0]; p->kind == DECL_NODE; p = p->sibling) ;
        //
        //    p->label.begin_label = t->label.begin_label;
        //    for (; p; p = p->sibling)
        //    {
        //      last = p;
        //      recursive_get_label(p);
        //    }
        //
        //    t->label.next_label = last->label.next_label;
        //    if (t->sibling)
        //      t->sibling->label.begin_label = t->label.next_label;
        //  }
        //    break;

    case STMT_WHILE:
    {
        TreeNode *e = this->child;
        TreeNode *s = this->child->sibling;

        if (this->label.begin_label.empty())
            this->label.begin_label = new_label();
        s->label.next_label = this->label.begin_label;

        s->label.begin_label = e->label.true_label = new_label();

        if (this->label.next_label == "")
            this->label.next_label = new_label();
        e->label.false_label = this->label.next_label;

        if (this->sibling)
            this->sibling->label.begin_label = this->label.next_label;

        e->recursive_get_label();
        s->recursive_get_label();
        break;
    }
    case STMT_IF:
    {
        TreeNode *e = this->child;
        TreeNode *s = this->child->sibling;

        // if (this->label.begin_label.empty())
        //     this->label.begin_label = new_label();

        // s->label.next_label = this->label.begin_label;

        // s->label.begin_label = e->label.true_label = new_label();

        if (this->label.next_label.empty())
            this->label.next_label = new_label();
        // e->label.false_label = this->label.next_label;

        // 如果有else
        if ((this->sibling) && (this->sibling->stype == STMT_ELSE))
            this->sibling->label.next_label = new_label();
        e->recursive_get_label();
        s->recursive_get_label();
        break;
    }
        //  case STMT_FOR:
        //    TreeNode *e = this->child;
        //    TreeNode *s = this->child->sibling;
        //
        //    if (this->label.begin_label.empty())
        //      this->label.begin_label = new_label();
        //    s->label.next_label = this->label.begin_label;
        //
        //    s->label.begin_label = e->label.true_label = new_label();
        //
        //    if (this->label.next_label == "")
        //      this->label.next_label = new_label();
        //    e->label.false_label = this->label.next_label;
        //    if (this->sibling)
        //      this->sibling->label.begin_label = this->label.next_label;
        //
        //    e->recursive_get_label();
        //    s->recursive_get_label();
        //    break;

    default:
        if (this->sibling)
            this->sibling->label.begin_label = this->label.next_label;
        break;
        /* ... */
    }
}

void TreeNode::expr_get_label()
{
    // if (this->type->type != VALUE_BOOL)
    //     return;

    TreeNode *e1 = this->child;
    TreeNode *e2 = this->child->sibling;
    switch (this->optype)
    {
    case OP_OR:
        e1->label.true_label = e2->label.true_label = this->label.true_label;
        e1->label.false_label = new_label();
        e2->label.false_label = this->label.false_label;
        break;
    case OP_AND:
        e1->label.true_label = new_label();
        e2->label.true_label = this->label.true_label;
        e1->label.false_label = e2->label.false_label = this->label.false_label;
        break;
    case OP_NOT:
        e1->label.true_label = this->label.false_label;
        e1->label.false_label = this->label.true_label;
        break;
    default:
        break;
        /* ... */
    }
    if (e1)
        e1->recursive_get_label();
    if (e2)
        e2->recursive_get_label();
}

void TreeNode::recursive_get_label()
{
    if (this->nodeType == NODE_STMT)
    {
        this->stmt_get_label();
    }
    else if (this->nodeType == NODE_EXPR)
    {

        //    this->expr_get_label();
    }
    else if (this->nodeType == NODE_MAIN)
    {
        this->label.begin_label = "_start";
    }
    else
    {
        TreeNode *cur = this->child;
        while (cur)
        {
            cur->recursive_get_label();
            cur = cur->sibling;
        }
    }
    for (TreeNode *t = this->child; t; t = t->sibling)
        t->recursive_get_label();
}

void TreeNode::get_label()
{
    this->recursive_get_label();
}

void TreeNode::gen_header(ostream &out)
{
    out << endl;
    out << "# your asm code header here" << endl;
    /*your code here*/
    out << "\t.file\t" << __FILE__ << endl;
    out << "\t.text" << endl;
}

void TreeNode::gen_decl(ostream &out)
{
    for (int i = 0; i < GlobalSymTable->get_size(); i++)
    {
        if ((GlobalSymTable->get_symbol(i)->name != "main") && (GlobalSymTable->get_symbol(i)->type != Function))
        {
            if ((GlobalSymTable->get_symbol(i)->type != Function) && (GlobalSymTable->get_symbol(i)->type != Symbol_char_star))
            {
                out << "\t.global\t" << GlobalSymTable->get_symbol(i)->name << endl;
                out << "\t.align\t4" << endl;
                out << "\t.type\t" << GlobalSymTable->get_symbol(i)->name << ", @object" << endl;
                out << GlobalSymTable->get_symbol(i)->name << ":" << endl;
                out << "\t.zero\t4" << endl;
            }
        }
    }
}
void TreeNode::gen_rodata(ostream &out)
{
    for (int i = 0; i < GlobalSymTable->get_size(); i++)
    {
        if (GlobalSymTable->get_symbol(i)->type == Symbol_char_star)
        {
            out << GlobalSymTable->get_symbol(i)->name << ":" << endl;
            out << "\t.string\t" << GlobalSymTable->get_symbol(i)->string_content << endl;
        }
    }
}
void TreeNode::gen_temp_var(ostream &out)
{
    if (TmpSymTable->get_size() > 0)
    {
        out << "\t.data" << endl;
        for (int i = 0; i < TmpSymTable->get_size(); i++)
        {

            out << "\t.global\t" << TmpSymTable->get_symbol(i)->name << endl;
            out << "\t.align\t4" << endl;
            out << "\t.type\t" << TmpSymTable->get_symbol(i)->name << ", @object" << endl;
            out << TmpSymTable->get_symbol(i)->name << ":" << endl;
            out << "\t.zero\t4" << endl;
        }
    }
}

void TreeNode::gen_code(ostream &out)
{
    gen_header(out);
    if (!GlobalSymTable->isEmpty())
    {
        out << "\t.bss\n";
        this->gen_decl(out);
    }
    // this->gen_temp_var(out);
    if (tmp_string_seq > 0)
    {
        out << "\t.section\t.rodata\n";
        this->gen_rodata(out);
    }
    this->gen_temp_var(out);
    out << endl;
    out << endl;
    out << "# your asm code here" << endl;
    out << "\t.text" << endl;
    out << "\t.globl main" << endl;
    out << "\t.type	main, @function" << endl;
    out << "main:" << endl;
    out << tableSym << ASM_PUSH << tableSym << ASM_EBP << endl;
    out << tableSym << ASM_MOV << tableSym << ASM_ESP << ", " << ASM_EBP << endl;

    int count = 0;
    int quads_size = quads.size();

    // TODO
    for (int i = 0; i < quads_size; i++)
    {
        switch (quads[i].getOpCode())
        {
        case OpCode_PLUS:
        {
            out << endl
                << tableSym << ASM_MOV << tableSym;
            printOpObject(quads[i].getArg(1), out, true);
            out << ", "
                << "%eax";

            out
                << endl
                << tableSym
                << ASM_ADD << tableSym;
            printOpObject(quads[i].getArg(2), out, true);
            out << ", "
                << "%eax";

            out << endl
                << tableSym
                << ASM_MOV << tableSym
                << "%eax"
                << ", ";
            printOpObject(quads[i].getArg(3), out, true);
            break;
        }
        case OpCode_ASSIGN:
        {
            out << endl
                << tableSym
                << ASM_MOV << tableSym;
            printOpObject(quads[i].getArg(1), out, true);
            out << ", ";
            printOpObject(quads[i].getArg(3), out, true);

            break;
        }
        case OpCode_RETURN:
        {
            if (quads[i].getArg(3) != nullptr)
            {
                out << endl
                    << tableSym
                    << ASM_MOV << tableSym;
                printOpObject(quads[i].getArg(3), out, true);
                out << ", ";
                out << ASM_EAX;
            }
            else
            {
                out << endl
                    << tableSym << ASM_MOV << tableSym
                    << "$0, " << ASM_EAX;
                out << endl
                    << tableSym << ASM_POP << tableSym << ASM_EBP;
            }

            break;
        }
        case OpCode_PUSH:
        {
            if (quads[i + 1].getOpCode() == OpCode_PUSH)
            {
                out << endl
                    << tableSym
                    << ASM_SUB << tableSym
                    << "$8, " << ASM_ESP;

                out << endl
                    << tableSym << ASM_PUSH << "\t$";
                printOpObject(quads[i].getArg(3), out, true);

                out << endl
                    << tableSym << ASM_PUSH << "\t$";
                printOpObject(quads[i + 1].getArg(3), out, true);

                i = i + 1;
            }
            else
            {
                out << endl
                    << tableSym
                    << ASM_SUB << tableSym
                    << "$12, " << ASM_ESP;

                out << endl
                    << tableSym << ASM_PUSH << "\t$";
                printOpObject(quads[i].getArg(3), out, true);
            }
            break;
        }
        case OpCode_PRINTF:
        {
            out << endl
                << tableSym << ASM_CALL << tableSym << ASM_PRINTF;
            out << endl
                << tableSym << ASM_ADD << tableSym << "$16, " << ASM_ESP;
            break;
        }
        case OpCode_SCANF:
        {
            out << endl
                << tableSym << ASM_CALL << tableSym << ASM_SCANF;
            out << endl
                << tableSym << ASM_ADD << tableSym << "$16, " << ASM_ESP;
            break;
        }
        case OpCode_CITE:
        {
            out << endl
                << tableSym
                << ASM_MOV << tableSym;
            printOpObject(quads[i].getArg(1), out, true);
            out << ", ";
            printOpObject(quads[i].getArg(3), out, true);
            break;
        }
        case OpCode_LABEL:
        {
            out << endl;
            printOpObject(quads[i].getArg(3), out, true);
            out << ":";
            break;
        }
        case OpCode_JLE:
        {
            out << endl
                << tableSym << ASM_JLE << tableSym;
            printOpObject(quads[i].getArg(3), out, true);
            break;
        }
        case OpCode_IF:
        {
            out << endl
                << tableSym
                << ASM_TEST << tableSym;
            printOpObject(quads[i].getArg(3), out, true);
            out << ", ";
            printOpObject(quads[i].getArg(3), out, true);
            break;
        }
        case OpCode_MINUS:
        {
            out << endl
                << tableSym << ASM_MOV << " ";
            printOpObject(quads[i].getArg(1), out, true);
            out << ", "
                << "%eax";

            out
                << endl
                << tableSym
                << ASM_SUB << tableSym;
            printOpObject(quads[i].getArg(2), out, true);
            out << ", "
                << "%eax";

            out << endl
                << tableSym
                << ASM_MOV << tableSym
                << "%eax"
                << ", ";
            printOpObject(quads[i].getArg(3), out, true);
            break;
        }
        case OpCode_JUMP:
        {
            out << endl
                << tableSym << ASM_JUMP << " ";
            printOpObject(quads[i].getArg(3), out, true);
            break;
        }
        case OpCode_TIMES:
        {
            out << endl
                << tableSym << ASM_MOV << tableSym;
            printOpObject(quads[i].getArg(1), out, true);
            out << ", "
                << ASM_EDX;

            out << endl
                << tableSym << ASM_MOV << tableSym;
            printOpObject(quads[i].getArg(2), out, true);
            out << ", "
                << ASM_EAX;

            out
                << endl
                << tableSym
                << ASM_IMUL << tableSym<<ASM_EDX<<", "<<ASM_EAX;

            out << endl
                << tableSym
                << ASM_MOV << tableSym
                << ASM_EAX
                << ", ";
            printOpObject(quads[i].getArg(3), out, true);
            break;
            break;
        }
        default:
            break;
        }
    }

    out << endl
        << tableSym << ASM_RET;
    out << endl;
    out << "\t.section	.note.GNU-stack,"
           ",@progbits"
        << endl;
}
