
#include "symbol.h"
using namespace std;
#include "debug.h"

SymbolTable *GlobalSymTable = new SymbolTable();
SymbolTable::SymbolTable(){
	this->size = 0;
}
// SymbolTable symtbl;
// 按变量名遍历表寻找变量
symbol* SymbolTable::lookup(string name)
{
	for (int i = 0; i < size; i++)
		if (table[i].name == name)
			return &table[i];
	return nullptr;
}

int SymbolTable::insert(string name, int t, symbolType st)
{

	if (size >= MAX_ID)
		return -1;
	table[size].name = name;
	table[size].token = t;
	// table[size].node = t;
	table[size].type = st;
	size++;
	return size - 1;
}
int SymbolTable::insert(symbol s){
	if(size >= MAX_ID)
		return -1;
	table[size] = s;
	
	size++;
	
	return size -1;
}
int SymbolTable::gettoken(string name)
{
	for (int i = 0; i < size; i++)
		if (table[i].name == name)
			return table[i].token;
	return -1;
}

void SymbolTable::printTable(){
	cout<<"==========symbol table======="<<endl;
	for(int i=0;i<size;i++)
		table[i].printSymbol();
	cout << "===========================" << endl;
}

string SymbolTable::getname(int pos)
{
	return table[pos].name;
}

int SymbolTable::set_type(int pos, symbolType type)
{
	if (pos < 0 || pos >= size)
	{
		cerr << "Bad identifier" << endl;
		return -1;
	}

	table[pos].type = type;
	return 0;
}

symbolType SymbolTable::get_type(int pos)
{
	if (pos < 0 || pos >= size)
	{
		cerr << "Bad identifier" << endl;
		return unset;
	}

	return table[pos].type;
}