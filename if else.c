/*In this program we will be seeing Decision Making Statements*/

/*In C if, if else, nested if , switch , nested Switch are know as Decision Making Statements , which is used to have decision based up on the condition , the statement is executed*/

/*In this Example lets see how If Else Statement works in a program*/

/*Syntax of If else statement

if(boolean_expression)

{

statement 1;

statement 2;

.
.
.

statement n;

}

else

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

/*If the Boolean expression evaluates to true, then the if block will be executed,
otherwise, the else block will be executed.*/

/*In this the condition which is given is False since a is less than 20 but the condition is a is greater than 20 .Therefore the condition fails and else , Else statement will be Executed */

if( a > 20 )

{

printf("\na is GREATER THAN 20\n" );

printf("\nIF STATEMENT IS EXECUTED\n");

}

else

{

printf("\na is LESSER THAN 20\n" );

printf("\nELSE STATEMENT IS EXECUTED\n");

}

printf("\nvalue of a is : %d\n", a);


/*Redifinied  local variable  a from 10 to 30 */

a = 30;

/* check the boolean condition using if statement */

/*If the Boolean expression evaluates to true, then the if block will be executed,
otherwise, the else block will be executed.*/

/*In this the condition which is given is True since a is Greater than 20, the condition is a is greater than 20 .Therefore the condition is True and else , If statement will be Executed */

if( a > 20 )

{

printf("\na is GREATER THAN 20\n" );

printf("\nIF STATEMENT IS EXECUTED\n");

}

else

{

printf("\na is LESSER THAN 20\n" );

printf("\nELSE STATEMENT IS EXECUTED\n");

}

printf("\nvalue of a is : %d\n", a);


}