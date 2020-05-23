/*In this program we will be seeing Decision Making Statements*/

/*In C if, if else, nested if , switch , nested Switch are know as Decision Making Statements , which is used to have decision based up on the condition , the statement is executed*/

/*In this Example lets see how SIMPLE IF Statement works in a program*/

/*Syntax of Simple If statement

if(boolean_expression)

{

statement 1;

statement 2;

.
.
.

statement n;

}
*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

/* local variable definition */

int a = 10;

/* check the boolean condition using if statement */

/*In this "IF" condition is True therefore the statements/code inside will be Executed Succesfully*/

if( a < 20 )

{

/* if condition is true then print the following */

printf("\na is less than 20\n" );

}

printf("\nvalue of a is : %d\n", a);

/* check the boolean condition using if statement */

/*In this "IF" condition is False therefore the statements/code inside will be NOT-Execute*/

if( a > 20 )

{

printf("\na is Greater than 20\n" );

}

printf("\nvalue of a is : %d\n", a);

}