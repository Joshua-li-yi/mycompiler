
## now process
+ complish the basic tree and type code
+ add expression
+ add idlist
+ multi lines
+ add if else
+ add while
+ add assignment stmt
+ add for stmt
+ add function
+ add main
+ add function call
+ add point and cite
+ add scanf & prinf
+ add global var symbol table
## problem
+ if "if" or "while" is processed firstly while happen sagmention error 
+ else if can't identify

## todo
+ distinguish different scopes of var
+ error check

作用域
直接找declartion的语句，找其父节点, 如果其父节点为STMT DOMAIN 就创建一个符号表
遍历树遇到STMT_DOMAIN语句就遍历其子节点，如果有declaration 就插入这个符号表当中
符号表只需要插入数据无需删除
……