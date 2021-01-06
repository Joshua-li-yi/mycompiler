#ifndef ASMCODE_H
#define ASMCODE_H

// Asm instructor
#define ASM_MOV "movl"
#define ASM_MOVZBL "movzbl"
#define ASM_ADD "addl"
#define ASM_XOR "xor"
#define ASM_OR "or"
#define ASM_AND "and"
#define ASM_NOT "not"
#define ASM_NEG "neg"
#define ASM_SUB "subl"
#define ASM_MUL "mul"
#define ASM_IMUL "imull"
#define ASM_DIV "idivl"
#define ASM_CLTD "cltd"
#define ASM_PUSH "pushl"
#define ASM_POP "popl"
#define ASM_CALL "call"
#define ASM_RET "ret"
#define ASM_CMP "cmpl"
#define ASM_ENTER "enter"
#define ASM_LEAVE "leave"
#define ASM_LEA "lea" // 加载变量地址
#define ASM_TEST "testl"
#define ASM_SETE "sete" //等于
#define ASM_SETNE "setne" //不等于
#define ASM_SETG "setg"//大于
#define ASM_SETL "setl"//小于
#define ASM_SETLE "setle" //小于等于
#define ASM_SETGE "setge"
#define ASM_NEG "neg"//负数
// Jump instructor
#define ASM_JUMP "jmp"
#define ASM_JNE "jne"
#define ASM_JE "je"
#define ASM_JG "jg"
#define ASM_JGE "jge"
#define ASM_JL "jl"
#define ASM_JLE "jle"
#define ASM_JNE "jne"
#define ASM_PRINTF "printf"
#define ASM_SCANF "scanf"
// 32-bit asm register
#define ASM_EAX "%eax"
#define ASM_EBX "%ebx"
#define ASM_ECX "%ecx"
#define ASM_EDX "%edx"
#define ASM_EBP "%ebp"
#define ASM_ESP "%esp"
#define ASM_AL "%al"

// Date type
#define DOUBLE_WORD "dword"

// Other characters
#define ASM_LB "["
#define ASM_RB "]"
#define ASM_COMMA ","
#define ASM_COLON ":"
#define tableSym "\t"
#define ASM_CF "cf"
#define ASM_ZF "zf"
#define ASM_OF "of"
#define ASM_SF "sf"
#endif
