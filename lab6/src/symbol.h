#ifndef SYMBOL_H
#define SYMBOL_H
#define MAX_ID 1024
#include "pch.h"
using std::cerr;
using std::cout;
using std::endl;
using std::list;
using std::stack;
using std::string;
using std::unordered_map;

enum symbolType
{
	unset = -1,
	integer = 0,
	function = 1,
	pointer = 2,
	boolean = 3,
	Void = 4,
	Struct = 5,
	Array = 6,
	literal = 7,
	cite = 8,
};

struct symbol
{
	string name;
	int token; // TODO 这个是干嘛的
	// TreeNode* node;
	symbolType type;
};

class SymbolTable
{
private:
	symbol table[MAX_ID];
	int size;

public:
	int lookup(string name);
	int insert(string , int, symbolType);
	int insert(symbol);
	int gettoken(string name);
	string &getname(int pos);
	int set_type(int pos, symbolType type);
	symbolType get_type(int pos);
};
#endif