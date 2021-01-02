#include "Quad.h"
#include <typeinfo>

// flag的不同值如下:
/* 


// 四元式：
/*
四元式实际上是一种“三地址语句”的等价表示。它的一般形式为：
(op,arg1,arg2,result)
*/

/*
symbol代表变量，int代表字面量
比如 int a = 1；
这里面，a是变量，1是字面量
char a[100] = "111223";
就是将字符串字面量赋值给变量
*/

/*********************** opCode 的操作有很多，对应函数的第一个参数
 * Operation Code for a Quad:
 * @enum JUMP:  JUMP operation.
 * @enum JUMP_SMALL:    if arg1 <  arg2, JUMP
 * @enum JUMP_EQ_SMALL: if arg1 <= arg2, JUMP
 * @enum JUMP_GRATE:    if arg1 >  arg2, JUMP
 * @enum JUMP_EQ_GREAT: if arg1 >= arg2, JUMP
 * @enum JUMP_EQUAL:    if arg1 == arg2, JUMP
 * @enum JUMP_NOT_EQUAL:if arg1 != arg2, JUMP
 * @enum PLUS:  arg1 + arg2 to result
 * @enum MINUS: arg1 - arg2 to result
 * @enum TIMES: arg1 * arg2 to result
 * @enum DIV:   arg1 / arg2 to result
 * @enum MOD:   arg1 % arg2 to result
 * @enum POWER: arg1 ^ arg2 to result
 * @enum NEGATIVE:   - arg1 to result
 * @enum ASSIGN:       arg1 to result
 * @enum ASSIGN_ARRAY: result[arg2] = arg1
 * @enum ASSIGN_STRUCT: result.arg2 = arg1
 * @enum GET_ADDRESS: &arg1 to reuslt
 * @enum PARAM: Param of the function will be called
 * @enum CALL: CALL function
 * @enum RETURN: Exit from a function
 * @enum GET_VALUE: Get the value of a pointer
 * @enum GET_ARRAY: Get the value of an array
 * @enum GET_STRUCT:GET the value of a struct
 ************************
*/

void printOpObject(OpObject *ob, ostream &out=cout)
{
    switch (ob->getState())
    {
    case arg_int:
        out << ob->arg.int_target;
        break;
    case arg_double:
        out << ob->arg.double_target;
        break;
    case arg_bool:
        out << ob->arg.bool_target;
        break;
    case arg_char:
        out << ob->arg.char_target;
        break;
    case arg_var:
        out << ob->arg.var->name;
        break;
    case arg_char_star:
        out << ob->arg.char_star_target;
        break;
    default:
        out << '-';
        break;
    }
}

Quad::Quad(OpCode op, OpObject *arg1, OpObject *arg2, OpObject *result)
// 变量跟变量运算，值为int
{
    this->op = op;
    this->arg1 = arg1;
    this->arg2 = arg2;
    this->result = result;
}

// 打印生成的运算符
string Quad::printOp()
{
    switch (this->op)
    {
    case OpCode_JUMP:
        return "JUMP\t";
    case OpCode_PLUS:
        return "PLUS\t";
    case OpCode_MINUS:
        return "MINUS\t";
    case OpCode_TIMES:
        return "TIMES\t";
    case OpCode_DIV:
        return "DIV\t";
    case OpCode_MOD:
        return "MOD\t";
    case OpCode_POWER:
        return "POWER\t";
    case OpCode_NEGATIVE:
        return "NEGATIVE\t";
    case OpCode_ASSIGN:
        return "ASSIGN\t";
    case OpCode_ASSIGN_ARRAY:
        return "ASSIGN_ARRAY\t";
    case OpCode_ASSIGN_STRUCT:
        return "ASSIGN_STRUCT\t";
    case OpCode_GET_ADDRESS:
        return "GET_ADDRESS\t";
    case OpCode_ASSIGN_POINTER:
        return "ASSIGN_POINTER\t";
    case OpCode_PARAM:
        return "PARAM\t";
    case OpCode_CALL:
        return "CALL\t";
    case OpCode_RETURN:
        return "RETURN\t";
    case OpCode_FUNC_DEF:
        return "FUNC_DEF\t";
    case OpCode_END_FUNCTION:
        return "END_FUNCTION\t";
    case OpCode_LABEL:
        return "LABEL\t";
    case OpCode_GET_VALUE:
        return "GET_VALUE\t";
    case OpCode_GET_ARRAY:
        return "GET_ARRAY\t";
    case OpCode_GET_STRUCT:
        return "GET_STRUCT\t";
    case OpCode_VAR_DECL:
        return "VAR_DECL\t";
    case OpCode_EQU:
        return "EQU\t";
    case OpCode_GTR:
        return "GTR\t";
    case OpCode_LSS:
        return "LSS\t";
    case OpCode_GEQ:
        return "GEQ\t";
    case OpCode_LEQ:
        return "LEQ\t";
    case OpCode_NEQ:
        return "NEQ\t";
    case OpCode_LOGICAL_AND:
        return "LOGICAL_AND\t";
    case OpCode_LOGICAL_OR:
        return "LOGICAL_OR\t";
    case OpCode_LOGICAL_NOT:
        return "LOGICAL_NOT\t";
    case OpCode_AND:
        return "AND\t";
    case OpCode_OR:
        return "OR\t";
    case OpCode_NOT:
        return "NOT\t";
    case OpCode_PPLUS:
        return "PPLUS\t";
    case OpCode_MMINUS:
        return "MMINUS\t";
    case OpCode_CITE:
        return "CITE\t";
    case OpCode_POINTER:
        return "POINTER\t";
    case OpCode_MAIN:
        return "MAIN\t";
    case OpCode_PRINTF:
        return "PRINTF\t";
    case OpCode_SCANF:
        return "SCANF\t";
    case OpCode_PUSH:
        return "PUSH\t";
    case OpCode_JLE:
        return "JLE\t";
    case OpCode_IF:
        return "IF\t";
    default:
        break;
    }
}
void Quad::printQuad()
// 打印生成的四元式
{
    cout << this->printOp() << "\t";

    if (this->arg1 != nullptr)
    {
        printOpObject(this->arg1);
        cout << "\t";
    }
    else
        cout << "-"
             << "\t";

    if (this->arg2 != nullptr)
    {
        printOpObject(this->arg2);
        cout << "\t";
    }
    else
        cout << "-"
             << "\t";
    if (this->result != nullptr)
    {
        printOpObject(this->result);
        cout << "\t";
    }
    else
        cout << "-"
             << "\t";
}