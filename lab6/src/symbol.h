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
	Unset,
	Integer,
	Function,
	Pointer,
	Boolean,
	Void,
	Struct,
	Array,
	Literal,
	Cite,
	Symbol_char,
	Symbol_char_star,
	Double,
};

struct symbol
{
	string name;
	int token; 
	symbolType type;
	string string_content="";
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
	void genTmpVar(int num, int t,symbolType st){
		this->init("t"+intTostring(num), t, st);
	}
	// 生成字符串常量
	void genTmpString(int num, int t,string s)
	{
		this->init(".LC" + intTostring(num), t, Symbol_char_star);
		this->string_content = s;
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
	symbol *get_symbol(int pos);
	symbol *get_symbol_from_token(int token);
	// 插入
	int insert(string , int, symbolType);
	int insert(symbol);

	int gettoken(string name);
	string getname(int pos);
	int set_type(int pos, symbolType type);
	symbolType get_type(int pos);

	// 打印符号表
	void printTable();
	inline int get_size(){return size;}
	// 判断table是否为空
	inline bool isEmpty(){
		if(size>0)
			return false;
		return true;
	}
};
// 全局符号表
extern SymbolTable *GlobalSymTable;
// 临时变量表
extern SymbolTable *TmpSymTable;

#endif