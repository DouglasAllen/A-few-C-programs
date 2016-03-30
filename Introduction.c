if statement

Syntax
 The syntax of an if statement in C programming language is:
 if(boolean_expression)
 {
 /* statement(s) will execute if the boolean expression is true */
 }

if...else statement

Syntax
 The syntax of an if...else statement in C programming language is:
if(boolean_expression)
 {
 /* statement(s) will execute if the boolean expression is true */
 } else
 {
 /* statement(s) will execute if the boolean expression is false */
}

The if...else Statement

Syntax
 The syntax of an if...else if...else statement in C programming language is:
if(boolean_expression 1)
 {
/* Executes when the boolean expression 1 is true */
}
 else if( boolean_expression 2)
{
/* Executes when the boolean expression 2 is true */
 }
 else if( boolean_expression 3)
 {
/* Executes when the boolean expression 3 is true */
 }
 else
{
/* executes when the none of the above condition is true */
}

Nested if statements

Syntax
 The syntax for a nested if statement is as follows:
 if( boolean_expression 1)
{
 /* Executes when the boolean expression 1 is true */
 if(boolean_expression 2)
{
/* Executes when the boolean expression 2 is true */
 }
}


switch statement

Syntax
 The syntax for a switch statement in C programming language is as follows:
 switch(expression)
{
case constant-expression : statement(s); break; /* optional */
case constant-expression : statement(s); break; /* optional */
/* you can have any number of case statements */
default : /* Optional */ statement(s);
 }








