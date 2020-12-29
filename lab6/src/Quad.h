#ifndef QUAD_H
#define QUAD_H
#define MAX_QUAD 1024
#include "common.h"
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
enum OpCode
{
    OpCode_JUMP,
    OpCode_JUMP_SMALL,
    OpCode_JUMP_EQ_SMALL,
    OpCode_JUMP_GREAT,
    OpCode_JUMP_EQ_GREAT,
    OpCode_JUMP_EQUAL,
    OpCode_JUMP_NOT_EQUAL,
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
    OpCode_GET_STRUCT
};

union Arg {// arg是联合类型，可以代表一个符号或者一个变量
    symbol *var;
    int int_target;
    bool bool_target;
    double double_target;
    char char_target;
    // string string_target;
};

class Quad
{
private:
    OpCode op;
    Arg arg1;
    Arg arg2;
    Arg result;
    /********************************
 * |      | arg1 | arg2 | result|
 * | int  |  0   |   0  |   0   |
 * |symbol|  1   |   2  |   4   |
 * *******************************
*/
    int flag;
    string printOp();

public:
    // Jump to the int_target
    Quad(OpCode op, int result);
    // Quad(OpCode op, symbol *result);
    Quad(OpCode op, symbol *arg1, symbol *result); // assign variable to variable
    Quad(OpCode op, int arg1, symbol *result);     // assign literals to variable
    Quad(OpCode op, symbol *arg1, symbol *arg2, symbol *result);
    Quad(OpCode op, int arg1, symbol *arg2, symbol *result);
    Quad(OpCode op, symbol *arg1, int arg2, symbol *result);
    Quad(OpCode op, int arg1, int arg2, symbol *result);

    Quad(OpCode op, symbol *arg1, symbol *arg2, int result);
    Quad(OpCode op, symbol *arg1, int arg2, int result);
    Quad(OpCode op, int arg1, int arg2, int result);

    inline void backpatch(int int_target) { this->result.int_target = int_target; }; 
    // 上面的是回填函数，将传入参数填入到int_target里面，代表跳转的目标地址
    inline int getResult() { return this->result.int_target == 0 ? 1 : 0; }
    // 是0就返回1,不是0就返回0
    inline int getFlag() { return this->flag; }
    inline OpCode getOpCode() { return this->op; }
    inline Arg getArg(int index)
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