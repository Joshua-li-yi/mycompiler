#ifndef TYPESYSTEM_H
#define TYPESYSTEM_H
#include "./pch.h"
using namespace std;

enum ValueType
{
    VALUE_BOOL,
    VALUE_INT,
    VALUE_CHAR,
    VALUE_STRING,
    VALUE_DOUBLE,
    VALUE_POINT,
    VALUE_CITE,
    VALUE_VOID,
    COMPOSE_STRUCT,
    COMPOSE_UNION,
    COMPOSE_FUNCTION
};

class Type
{
public:
    ValueType type;
    Type(ValueType valueType);
public:  
    /* 如果你要设计复杂类型系统的话，可以修改这一部分 */
    ValueType* childType; // for union or struct
    ValueType* paramType, retType; // for function
    
    void addChild(Type* t);
    void addParam(Type* t);
    void addRet(Type* t);
public:
    ValueType* sibling; 
public:
    string getTypeInfo();
};

// 设置几个常量Type，可以节省空间开销
static Type* TYPE_INT = new Type(VALUE_INT);
static Type* TYPE_CHAR = new Type(VALUE_CHAR);
static Type* TYPE_BOOL = new Type(VALUE_BOOL);
static Type* TYPE_STRING = new Type(VALUE_STRING);
static Type* TYPE_DOUBLE = new Type(VALUE_DOUBLE);
static Type *TYPE_VOID = new Type(VALUE_VOID);

static Type *TYPE_POINT = new Type(VALUE_POINT);
static Type *TYPE_CITE = new Type(VALUE_CITE);

int getSize(Type* type);

#endif