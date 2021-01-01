#ifndef QUAD_H
#define QUAD_H
#define MAX_QUAD 1024
// #include "common.h"
#include "pch.h"
using std::cerr;
using std::cout;
using std::endl;
using std::list;
using std::stack;
using std::string;
using std::unordered_map;

#include "symbol.h"

/***********************
 * Operation Code for a Quad:
 * @enum JUMP:  JUMP operation.
 * @enum JUMP_SMALL:    if arg1 <  arg2, JUMP
 * @enum JUMP_EQ_SMALL: if arg1 <= arg2, JUMP
 * @enum JUMP_GRATE:    if arg1 >  arg2, JUMP
 * @enum JUMP_EQ_GREAT: if arg1 >= arg2, JUMP
 * @enum JUMP_EQUAL:    if arg1 == arg2, JUMP
 * @enum JUMP_NOT_EQUAL:if arg1 != arg2, JUMP
 * @enum JUMP_CONDITION if arg1(临时变量), JUMP result
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
// 操作码
enum OpCode
{
    OpCode_JUMP,
    OpCode_JUMP_SMALL,
    OpCode_JUMP_EQ_SMALL,
    OpCode_JUMP_GREAT,
    OpCode_JUMP_EQ_GREAT,
    OpCode_JUMP_EQUAL,
    OpCode_JUMP_NOT_EQUAL,
    OpCode_JUMP_CONDITION,
    OpCode_PLUS,
    OpCode_MINUS,
    OpCode_TIMES,
    OpCode_DIV,
    OpCode_MOD,
    OpCode_POWER,
    OpCode_NEGATIVE,
    OpCode_ASSIGN,
    OpCode_VAR_DECL,
    OpCode_ASSIGN_ARRAY,
    OpCode_ASSIGN_STRUCT,
    OpCode_ASSIGN_POINTER,
    OpCode_GET_ADDRESS,
    OpCode_PARAM,
    OpCode_CALL,
    OpCode_RETURN,
    OpCode_FUNC_DEF,
    OpCode_END_FUNCTION,
    OpCode_LABEL,
    OpCode_GET_VALUE,
    OpCode_GET_ARRAY,
    OpCode_GET_STRUCT,
    OpCode_EQU,
    OpCode_GTR,
    OpCode_LSS,
    OpCode_GEQ,
    OpCode_LEQ,
    OpCode_NEQ,
    OpCode_LOGICAL_AND,
    OpCode_LOGICAL_OR,
    OpCode_LOGICAL_NOT,
    OpCode_AND,
    OpCode_OR,
    OpCode_NOT,
    OpCode_PPLUS,
    OpCode_MMINUS,
    OpCode_IF,
};

enum Arg_state
{
    arg_var,
    arg_int,
    arg_bool,
    arg_char,
    arg_double,
    arg_char_star,
};

union Arg
{ // arg是联合类型，可以代表一个符号或者一个变量
    symbol *var;
    int int_target;
    bool bool_target;
    double double_target;
    char char_target;
    char* char_star_target;
    // string string_target;
};

struct OpObject
{
    Arg arg;
    Arg_state arg_state;
    Arg_state getState(){
        return arg_state;
    }
};

void printOpObject(OpObject *);

class Quad
{
private:
    OpCode op;
    OpObject *arg1;
    OpObject *arg2;
    OpObject *result;
    /********************************
 * |      | arg1 | arg2 | result|
 * *******************************
*/
    string printOp();

public:
    Quad(OpCode, OpObject*, OpObject*, OpObject*);
    inline OpCode getOpCode() { return this->op; }
    inline OpObject* getArg(int index)
    {
        if (index == 1)
            return this->arg1;
        else if (index == 2)
            return this->arg2;
        else if (index == 3)
            return this->result;
    }
    void printQuad();
};
#endif