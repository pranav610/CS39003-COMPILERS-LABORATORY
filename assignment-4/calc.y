%{ /* C Declarations and Definitions */
#include <string.h>
#include <iostream>
extern int yylex(); // Generated by Flex
void yyerror(char *s);
%}

%token NUMBER

%%
statement: expression
;
expression: expression '+' term
| expression '-' term
| term
;
term: term '*' factor
| term '/' factor
| factor
;
factor: '(' expression ')'
| '-' factor
| NUMBER
;
%%
void yyerror(char *s) { // Called on error
std::cout << s << std::endl;
}
int main() {
yyparse(); // Generated by Bison
}