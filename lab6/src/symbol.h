#define MAX_ID 1024

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
	literal = 7
};

typedef struct TAG_SYMBOL_ENTRY
{
	string name;
	int token; // TODO 这个是干嘛的
	symbolType type;
} symbol;

class symbol_table
{
private:
	symbol table[MAX_ID];
	int size;

public:
	int lookup(string name);
	int insert(string name, int token);
	int gettoken(string name);
	string &getname(int pos);
	int set_type(int pos, symbolType type);
	symbolType get_type(int pos);
};
