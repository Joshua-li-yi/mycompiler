%{
    #include "common.h"
    #include "./tree.h"
    #include "./main.tab.h"
    TreeNode* root;

    extern int lineno;
    int yylex();
    int yyerror( char const * );
    
%}
%token T_CHAR T_INT T_STRING T_BOOL T_DOUBLE T_VOID

%token LOP_ASSIGN PLUS_ASSIGN MIN_ASSIGN TIM_ASSIGN DIV_ASSIGN MOD_ASSIGN

%token SEMICOLON LB RB COMMA LP RP

%token IDENTIFIER INTEGER CHAR BOOL STRING 

%token PLUS MINUS TIMES DIVIDE MOD PPLUS MMINUS AND OR NOT EQU 

%token GTR LSS GEQ LEQ NEQ LOGICAL_AND LOGICAL_OR LOGICAL_NOT UMINUS 

%token FOR INPUT OUTPUT DO MAIN IF ELSE WHILE RETURN
%token SCANF PRINTF NEW
%token EOL

%left LOP_EQ
%left LOGICAL_OR
%left LOGICAL_AND
%left OR
%left AND
%left EQU NEQ
%left GTR LSS GEQ LEQ
%left PLUS MINUS
%left TIMES DIVIDE MOD
%right NOT LOGICAL_NOT
%right UMINUS
%left  PPLUS MMINUS // 后缀自增、自减
%%

program
: statements {root = new TreeNode(0, NODE_PROG); root->addChild($1);};

statements
:  statement {$$=$1;}
|  statement statements {$$=$1; $1->addSibling($2);}
|  LB statements RB {
    $$=$2;}
;

statement
: T MAIN LP RP statements {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DOMAIN;
    node->addChild($5);
    $2->addChild($1);
    $2->addChild(node);
    $$ = $2;
    }
| while_stmt {$$=$1;}
| if_stmt {$$=$1;}
| if_else_stmt {$$=$1;}
| for_stmt {$$=$1;}
| function_declaration {$$=$1;}
| function_definition {$$=$1;}
| function_call {$$=$1;}
| function_return {$$=$1;}
| scanf_function {$$=$1;}
| printf_function {$$=$1;}
| declaration SEMICOLON {$$ = $1;}
| assignment_stmt {$$=$1;}
| SEMICOLON  {$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_SKIP;}
;

scanf_function
: SCANF LP function_call_idlist RP SEMICOLON {$1->addChild($3); $$=$1;}
| SCANF LP RP SEMICOLON {$$=$1;}
;

printf_function
: PRINTF LP function_call_idlist RP SEMICOLON {$1->addChild($3); $$=$1;}
| PRINTF LP RP SEMICOLON {$$=$1;}
;

assignment_stmt
: IDENTIFIER LOP_ASSIGN expr SEMICOLON{
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_ASSIGN;

    TreeNode* node2 = new TreeNode($1->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild($3);
    node->addChild($1);
    node->addChild(node2);
    $$ = node;}
| IDENTIFIER LOP_ASSIGN IDENTIFIER LOP_ASSIGN expr SEMICOLON{
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_ASSIGN;

    TreeNode* node2 = new TreeNode($1->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild($5);
    node->addChild($1);
    node->addChild(node2);

    TreeNode* node3 = new TreeNode($1->lineno, NODE_STMT);
    node3->stype = STMT_ASSIGN;

    TreeNode* node4 = new TreeNode($1->lineno, NODE_EXPR);
    node4->optype = EXPR_COMBINE;
    node4->addChild($5);
    node3->addChild($3);
    node3->addChild(node4);

    node->addChild(node3);
    $$ = node;
}
| IDENTIFIER PLUS_ASSIGN expr SEMICOLON{
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_PLUS_ASSIGN;
    TreeNode* node2 = new TreeNode($1->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild($3);
    node->addChild($1);
    node->addChild(node2);
    $$ = node;}
| IDENTIFIER MIN_ASSIGN expr SEMICOLON{
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_MIN_ASSIGN;
    TreeNode* node2 = new TreeNode($1->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild($3);

    node->addChild($1);
    node->addChild(node2);
    $$ = node;}
| IDENTIFIER TIM_ASSIGN expr SEMICOLON{
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_TIM_ASSIGN;
    TreeNode* node2 = new TreeNode($1->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild($3);
    node->addChild($1);
    node->addChild(node2);
    $$ = node;}
| IDENTIFIER DIV_ASSIGN expr SEMICOLON{
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DIV_ASSIGN;
    TreeNode* node2 = new TreeNode($1->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild($3);
    node->addChild($1);
    node->addChild(node2);
    $$ = node;}
| IDENTIFIER MOD_ASSIGN expr SEMICOLON{
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_MOD_ASSIGN;
    TreeNode* node2 = new TreeNode($1->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild($3);
    node->addChild($1);
    node->addChild(node2);
    $$ = node;}
;

else_stmt
: ELSE statements {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_ELSE;
    TreeNode* node2 = new TreeNode($1->lineno, NODE_STMT);
    node2->stype = STMT_DOMAIN;
    node2->addChild($2);
    node->addChild(node2);
    $$ = node;
 }
;

if_stmt
: IF LP expr RP statements {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_IF;
    TreeNode* node2 = new TreeNode($1->lineno, NODE_STMT);
    node2->stype = STMT_DOMAIN;

    TreeNode* node3 = new TreeNode($1->lineno, NODE_EXPR);
    node3->optype = EXPR_COMBINE;

    node3->addChild($3);
    node2->addChild($5);
    node->addChild(node3);
    node->addChild(node2);
    $$ = node;}
;

if_else_stmt
: if_stmt else_stmt {$1->addSibling($2); $$=$1;}
;

for_stmt
: FOR LP IDENTIFIER LOP_ASSIGN expr SEMICOLON expr SEMICOLON IDENTIFIER LOP_ASSIGN expr RP statements {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_ASSIGN;
    TreeNode* node2 = new TreeNode($1->lineno, NODE_STMT);
    node2->stype = STMT_ASSIGN;

    TreeNode* node3 = new TreeNode($1->lineno, NODE_EXPR);
    node3->optype = EXPR_COMBINE;
    TreeNode* node4 = new TreeNode($1->lineno, NODE_EXPR);
    node4->optype = EXPR_COMBINE;

    node->addChild($3);
    node3->addChild($5);
    node->addChild(node3);

    node2->addChild($9);
    node4->addChild($11);
    node2->addChild(node4);

    TreeNode* node5 = forNode($1->lineno, node, $7, node2, $13);
    $$ = node5;}
| FOR LP SEMICOLON expr SEMICOLON expr RP statements {
    TreeNode* node = forNode($1->lineno, nullptr, $4, $6, $8);
    $$ = node;}
| FOR LP SEMICOLON expr SEMICOLON IDENTIFIER LOP_ASSIGN expr RP statements {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_ASSIGN;

    TreeNode* node2 = new TreeNode($1->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node->addChild($6);
    node2->addChild($8);
    node->addChild(node2);

    TreeNode* node3 = forNode($1->lineno, nullptr, $4, node, $10);
    $$ = node3;}
| FOR LP expr SEMICOLON SEMICOLON expr RP statements {
    TreeNode* node = forNode($1->lineno, $3, nullptr, $6, $8);
    $$ = node;}
| FOR LP expr SEMICOLON expr SEMICOLON RP statements {
    TreeNode* node = forNode($1->lineno, $3, $5, nullptr, $8);
    $$ = node;}
| FOR LP SEMICOLON SEMICOLON expr RP statements {
    TreeNode* node = forNode($1->lineno, nullptr, nullptr, $5, $7);
    $$ = node;}
| FOR LP SEMICOLON expr SEMICOLON RP statements {
    TreeNode* node = forNode($1->lineno, nullptr, $4, nullptr, $7);
    $$ = node;}
| FOR LP expr SEMICOLON SEMICOLON RP statements {
    TreeNode* node = forNode($1->lineno, $3, nullptr, nullptr, $7);
    $$ = node;}
| FOR LP SEMICOLON SEMICOLON RP statements {
    TreeNode* node = forNode($1->lineno, nullptr, nullptr, nullptr, $6);
    $$ = node;}
;

while_stmt
: WHILE LP expr RP statements {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_WHILE;
    TreeNode* node2 = new TreeNode($1->lineno, NODE_STMT);
    node2->stype = STMT_DOMAIN;

    TreeNode* node3 = new TreeNode($1->lineno, NODE_EXPR);
    node3->optype = EXPR_COMBINE;
    node3->addChild($3);
    node2->addChild($5);
    node->addChild(node3);
    node->addChild(node2);
    $$ = node;}
;

declaration
: T IDENTIFIER LOP_ASSIGN expr{  // declare and init
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_VAR_INIT;

    TreeNode* node2 = new TreeNode($1->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild($4);

    node->addChild($1);
    node->addChild($2);
    node->addChild(node2);
    $$ = node;
} 
| T IDLIST {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($1);
    node->addChild($2);
    $$ = node;
}
| T 
;

IDLIST
: IDENTIFIER COMMA IDLIST {$1->addSibling($3); $$=$1;}
| IDENTIFIER {$$ = $1;}
;

function_declaration_id
: T IDENTIFIER LOP_ASSIGN expr{  // declare and init
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($1);
    node->addChild($2);
    node->addChild($4);
    $$ = node;
} 
| T IDENTIFIER {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($1);
    node->addChild($2);
    $$ = node;}
| T {$$=$1;}
| T IDENTIFIER LOP_ASSIGN NEW T LP expr RP {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($1);
    node->addChild($2);
    node->addChild($4);
    node->addChild($5);
    node->addChild($7);
    $$ = node;
}
;

function_declaration_idlist
: function_declaration_id {$$=$1;}
| function_declaration_id COMMA function_declaration_idlist {$1->addSibling($3); $$=$1;}
;

function_return
: RETURN SEMICOLON {$$=$1;}
| RETURN expr SEMICOLON {
    TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
    node->optype = EXPR_COMBINE;
    node->addChild($2);
    $1->addChild(node); 
    $$=$1;
    }
;

function_definition_id
: T IDENTIFIER LOP_ASSIGN expr{  // declare and init
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($1);
    node->addChild($2);
    node->addChild($4);
    $$ = node;
} 
| T IDENTIFIER {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($1);
    node->addChild($2);
    $$ = node;}
;
function_definition_idlist
: function_definition_id {$$=$1;}
| function_definition_id COMMA function_definition_idlist {$$=$1;}

function_declaration
: T IDENTIFIER LP function_declaration_idlist RP SEMICOLON {
    TreeNode* node = new TreeNode($2->lineno, NODE_STMT);
    node->stype = STMT_FUN_DECL;
    node->addChild($1);
    node->addChild($2);
    node->addChild($4);
    $$ = node;
}

| T IDENTIFIER LP RP SEMICOLON {
    TreeNode* node = new TreeNode($2->lineno, NODE_STMT);
    node->stype = STMT_FUN_DECL;
    node->addChild($1);
    node->addChild($2);
    $$ = node;
}
;

function_definition
: T IDENTIFIER LP function_definition_idlist RP LB statements RB {
    TreeNode* node = new TreeNode($2->lineno, NODE_STMT);
    node->stype = STMT_FUN_DEF;
    TreeNode* node2 = new TreeNode($1->lineno, NODE_STMT);
    node2->stype = STMT_DOMAIN;
    node->addChild($1);
    node->addChild($2);
    node2->addChild($4);
    node2->addChild($7);
    node->addChild(node2);
    $$ = node;}
| T IDENTIFIER LP RP LB statements RB {
    TreeNode* node = new TreeNode($2->lineno, NODE_STMT);
    node->stype = STMT_FUN_DEF;
    TreeNode* node2 = new TreeNode($1->lineno, NODE_STMT);
    node2->stype = STMT_DOMAIN;
    node->addChild($1);
    node->addChild($2);
    node2->addChild($6);
    node->addChild(node2);
    $$ = node;
}
;

function_call_id
: expr {
    TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
    node->optype = EXPR_COMBINE;
    node->addChild($1);
    $$=node;
    }
;

function_call_idlist
: function_call_id { $$ = $1;}
| function_call_id COMMA function_call_idlist { $1->addSibling($3); $$=$1;}
;

function_call
: IDENTIFIER LP function_call_idlist RP SEMICOLON {
    TreeNode* node = new TreeNode($2->lineno, NODE_STMT);
    node->stype = STMT_FUN_CALL;
    node->addChild($1);
    node->addChild($3);
    $$ = node;
}
| IDENTIFIER LP RP SEMICOLON {
    TreeNode* node = new TreeNode($2->lineno, NODE_STMT);
    node->stype = STMT_FUN_CALL;
    node->addChild($1);
    $$ = node;
}
;
expr
:	expr PLUS expr	{ $$ = expNode($2, $1, $3); }
|	expr MINUS expr	{ $$ = expNode($2, $1, $3); }
|	expr TIMES expr	{ $$ = expNode($2, $1, $3); }
|	expr DIVIDE expr	{ $$ = expNode($2, $1, $3); }
| 	expr MOD expr	{ $$ = expNode($2, $1, $3); }
|   expr MMINUS     { $$ = expNode($2, $1, NULL); }
|   expr PPLUS      { $$ = expNode($2, $1, NULL); }
|   expr AND expr   { $$ = expNode($2, $1, $3); } 
|   expr OR expr    { $$ = expNode($2, $1, $3); }
|   NOT expr        { $$ = expNode($1, $2, NULL); }
|   expr EQU expr   { $$ = expNode($2, $1, $3); }
|   expr GTR expr   { $$ = expNode($2, $1, $3); }
|   expr LSS expr   { $$ = expNode($2, $1, $3); }
|   expr GEQ expr   { $$ = expNode($2, $1, $3); }
|   expr LEQ expr   { $$ = expNode($2, $1, $3); }
|   expr NEQ expr   { $$ = expNode($2, $1, $3); }
|   expr LOGICAL_AND expr  { $$ = expNode($2, $1, $3); }
|   expr LOGICAL_OR expr   { $$ = expNode($2, $1, $3); }
|   LOGICAL_NOT expr   { $$ = expNode($1, $2, NULL); }
|   MINUS expr %prec UMINUS   { $$ = expNode($1, $2, NULL); }
|	LP expr RP	    { $$ = $2; }
|   IDENTIFIER  {$$ = $1;}
|   INTEGER     {$$ = $1;}
|   CHAR {  $$ = $1;}
|   STRING {$$ = $1;}
|   AND IDENTIFIER {
    TreeNode* node = new TreeNode($2->lineno, NODE_EXPR);
    node->optype = OP_CITE;
    node->addChild($2);
    $$ = node;}
|   TIMES IDENTIFIER {
    TreeNode* node = new TreeNode($2->lineno, NODE_EXPR);
    node->optype = OP_POINTER;
    node->addChild($2);
    $$ = node;}
;

T
: T_INT {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_INT;} 
| T_CHAR {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_CHAR;}
| T_BOOL {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_BOOL;}
| T_DOUBLE {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_DOUBLE;}
| T_VOID {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_VOID;}
| T TIMES {
    TreeNode * node = new TreeNode(lineno, NODE_EXPR); 
    node->optype = OP_POINTER;
    $1->addChild(node);
    $$ = $1;
    }
| T AND {
    TreeNode * node = new TreeNode(lineno, NODE_EXPR); 
    node->optype = OP_CITE;
    $1->addChild(node);
    $$ = $1;
    }
;

%%

int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}