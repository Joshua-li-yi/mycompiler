%{
    #include "common.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    extern int lineno;
    int yylex();
    int yyerror( char const * );
%}
%token T_CHAR T_INT T_STRING T_BOOL T_DOUBLE T_VOID

%token LOP_ASSIGN 

%token SEMICOLON LB RB COMMA LP RP

%token IDENTIFIER INTEGER CHAR BOOL STRING NUMBER 

%token PLUS MINUS TIMES OVER MOD PPLUS MMINUS AND OR XOR NOT SHIFT_LEFT SHIFT_RIGHT ASSIGN EQU 

%token GTR LSS GEQ LEQ NEQ LOGICAL_AND LOGICAL_OR LOGICAL_NOT UMINUS 

%token FOR INPUT OUTPUT DO MAIN IF ELSE WHILE
%token EOL

%left LOP_EQ
%left LOGICAL_OR
%left LOGICAL_AND
%left OR
%left XOR
%left AND
%left EQU NEQ
%left GTR LSS GEQ LEQ
%left SHIFT_LEFT SHIFT_RIGHT
%left PLUS MINUS
%left TIMES OVER MOD
%right NOT LOGICAL_NOT
%right UMINUS
%left  PPLUS MMINUS // 后缀自增、自减
%%

program
: statements {root = new TreeNode(0, NODE_PROG); root->addChild($1);};

statements
:  statement {$$=$1;}
|  statement statements {$$=$1; $1->addSibling($2);}
|  LB statements RB {$$=$1;}
;

statement
: MAIN LP RP statements { $$ = $4; }
| while_stmt {$$=$1;}
| if_stmt {$$=$1;}
| declaration SEMICOLON {$$ = $1;}
| SEMICOLON  {$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_SKIP;}
;

if_stmt
: IF LP expr RP statement {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_IF;
    node->addChild($3);
    node->addChild($5);
    $$ = node;
}
| IF LP expr RP LB statements RB {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_IF;
    node->addChild($3);
    node->addChild($6);
    $$ = node;
}
;
while_stmt
:WHILE LP expr RP statements {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_WHILE;
    node->addChild($3);
    node->addChild($5);
    $$ = node;
    }
;
declaration
: T IDENTIFIER LOP_ASSIGN expr{  // declare and init
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($1);
    node->addChild($2);
    node->addChild($4);
    $$ = node;
} 
| T IDLIST {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($1);
    node->addChild($2);
    $$ = node;
}
;

IDLIST
: IDENTIFIER COMMA IDLIST {$1->addSibling($3); $$=$1;}
| IDENTIFIER {$$ = $1;}
;

expr
:	expr PLUS expr	{ $$ = expNode($2, $1, $3); }
|	expr MINUS expr	{ $$ = expNode($2, $1, $3); }
|	expr TIMES expr	{ $$ = expNode($2, $1, $3); }
|	expr OVER expr	{ $$ = expNode($2, $1, $3); }
| 	expr MOD expr	{ $$ = expNode($2, $1, $3); }
|   expr MMINUS     { $$ = expNode($2, $1, NULL); }
|   expr PPLUS      { $$ = expNode($2, $1, NULL); }
|   expr AND expr   { $$ = expNode($2, $1, $3); } 
|   expr OR expr    { $$ = expNode($2, $1, $3); }
|   NOT expr        { $$ = expNode($1, $2, NULL); }
|   expr XOR expr   { $$ = expNode($2, $1, $3); }
|   expr SHIFT_LEFT expr  { $$ = expNode($2, $1, $3); }
|   expr SHIFT_RIGHT expr { $$ = expNode($2, $1, $3); }
|   expr ASSIGN expr   { $$ = expNode($2, $1, $3); }
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
|   NUMBER      {$$ = $1;}
|   CHAR {  $$ = $1;}
|   STRING {$$ = $1;}
;

T: T_INT {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_INT;} 
| T_CHAR {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_CHAR;}
| T_BOOL {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_BOOL;}
| T_DOUBLE {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_DOUBLE;}
| T_VOID {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_VOID;}
;

%%

int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}