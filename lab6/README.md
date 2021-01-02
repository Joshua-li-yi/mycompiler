
## now process
+ 实现声明变量
+ 实现表达式

## problem
+ if else 等跳转语句，label怎么生成，以及四地址码怎么写
+ 函数四地址码怎么写
+ 
+ 汇编语句函数要怎么翻译

## todo
+ int 类型的数组，指针和引用
+ error check
+ 支持 breakcontinue
+ DAG 代码优化， 借助计时函数衡量
+ 支持中间代码生成

## 汇编代码

lea：load effective address。一般译作地址传递指令。

 leal -8(%ebp), %eax      //取出ebp寄存器的值并减去8赋给eax寄存器，ebp-8 -> eax

                                       //不进行间接寻址，直接把传送地址


 movl -8(%ebp), %eax    //取出ebp的值减去8，然后再读取(ebp-8)所指向的内存的内容，赋给eax ，(ebp-8)->eax

                                       //进行了间接寻址取出变量值（内容）

