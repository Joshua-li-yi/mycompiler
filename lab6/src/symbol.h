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

	inline string getSymbolName(){
		return this->name;
	}
	// 初始化
	bool init(string n, int t, symbolType st){
		this->name = n;
		this->token = t;
		this->type = st;
		return true;
	}
	// 生成临时变量
	void genTmpVar(int num, symbolType st){
		this->init("t"+intTostring(num), num, st);
	}
	// 打印symbol
	void printSymbol(){
		cout<<"name: "<<name<<" token: "<<token<<" type: "<<type<<endl;
	}
};

class SymbolTable
{
private:
	symbol table[MAX_ID];
	int size;

public:

	SymbolTable();
	// 查找symbol
	symbol* lookup(string name);
	// 插入
	int insert(string , int, symbolType);
	int insert(symbol);
	int gettoken(string name);
	string getname(int pos);
	int set_type(int pos, symbolType type);
	symbolType get_type(int pos);
	// 打印符号表
	void printTable();
};
// 全局符号表
extern SymbolTable *GlobalSymTable;

#endif