%option nounput
%{
#include "common.h"
#include "main.tab.h"  // yacc header
int lineno=1;
%}
BLOCKCOMMENT \/\*([^\*^\/]*|[\*^\/*]*|[^\**\/]*)*\*\/
LINECOMMENT \/\/[^\n]*
EOL	(\r\n|\r|\n)
WHILTESPACE [[:blank:]]

INTEGER [0-9]+
NUMBER [0-9]+(\.[0-9]+)?
CHAR \'.?\'
STRING \".+\"
LB \{
RB \}
LP \(
RP \) 
IDENTIFIER [[:alpha:]_][[:alpha:][:digit:]_]*
EQU ==
GTR \>
LSS \< 
GEQ \>= 
LEQ \<=
NEQ !=
LOGICAL_AND &&
LOGICAL_OR \|\|
LOGICAL_NOT !
WHILE while
%%

{BLOCKCOMMENT}  /* do nothing */
{LINECOMMENT}  /* do nothing */


"if" return IF;
"else" return ELSE;
"main" return MAIN;
"for" return FOR;
"=" return LOP_ASSIGN;
"int" {return T_INT;}
"bool" {return T_BOOL;}
"char" {return T_CHAR;}
"double" {return T_DOUBLE;}
"void" { return T_VOID;}
";" return  SEMICOLON;
"," return COMMA;
"return" {    
    TreeNode* node = new TreeNode(lineno, NODE_STMT);
    node->stype = STMT_RETURN;
    yylval = node;
    return RETURN;
    }
{WHILE} {return WHILE;}

{EQU} {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_EQU;
    yylval = node;
    return EQU;
    }
{GTR} {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_GTR;
    yylval = node;
    return GTR;
}
{LSS} {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_LSS;
    yylval = node;
    return LSS;
}
{GEQ} {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_GEQ;
    yylval = node;
    return GEQ;
}
{LEQ} {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_LEQ;
    yylval = node;
    return LEQ;
}
{NEQ} {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_NEQ;
    yylval = node;
    return NEQ;
}
{LOGICAL_AND} {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_LOGICAL_AND;
    yylval = node;
    return LOGICAL_AND;
}
{LOGICAL_OR} {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_LOGICAL_OR;
    yylval = node;
    return LOGICAL_OR;
}
{LOGICAL_NOT} {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_LOGICAL_NOT;
    yylval = node;
    return LOGICAL_NOT;
}


"+" {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_PLUS;
    yylval = node;
    return PLUS;
    }
"-" {    
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_MINUS;
    yylval = node;
    return MINUS;
    }
"*" {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_TIMES;
    yylval = node;
    return TIMES;
}
"/" {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_DIVIDE;
    yylval = node;
    return DIVIDE;
}
"%" {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_MOD;
    yylval = node;
    return MOD;
}
"&" {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_AND;
    yylval = node;
    return AND;
}
"|" {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_OR;
    yylval = node;
    return OR;
}
"~" {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_NOT;
    yylval = node;
    return NOT;
}
"++" {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_PPLUS;
    yylval = node;
    return PPLUS;
}
"--" {
    TreeNode* node = new TreeNode(lineno, NODE_EXPR);
    node->optype = OP_MMINUS;
    yylval = node;
    return MMINUS;
    
}
{INTEGER} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_INT;
    // atoi将string类型的数字转化为int类型
    node->int_val = atoi(yytext);
    yylval = node;
    return INTEGER;
}
{STRING} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_STRING;
    node->str_val = string(yytext);
    yylval = node;
    return STRING;
}
{CHAR} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_CHAR;
    node->int_val = yytext[1];
    yylval = node;
    return CHAR;
}
{NUMBER} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_DOUBLE;
    node->d_val = atof(yytext);
    yylval = node;
    return NUMBER;
}
{IDENTIFIER} {
    TreeNode* node = new TreeNode(lineno, NODE_VAR);
    node->var_name = string(yytext);
    yylval = node;
    return IDENTIFIER;
}
{LB}        { return LB; }
{RB}        { return RB; }
{LP}        { return LP; }
{RP}        { return RP; }
{WHILTESPACE} /* do nothing */

{EOL} lineno++;

. {
    cerr << "[line "<< lineno <<" ] unknown character:" << yytext << endl;
}
%%