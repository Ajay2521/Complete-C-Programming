/*In this program we will be seeing Decision Making Statements*/

/*In C if, if else, nested if , switch , nested Switch are know as Decision Making Statements , which is used to have decision based up on the condition , the statement is executed*/

/*In this Example lets see how If Else If Statement works in a program*/

/*Syntax of If else if statement

if(boolean_expression 1)

{

statement 1;

statement 2;

.
.
.

statement n;

}

else if(boolean_expression 2)

{

statement 1;

statement 2;

.
.
.

statement n;

}

else if(boolean_expression 3)

{

statement 1;

statement 2;

.
.
.

statement n;

}


.
.
.
.

else if(boolean_expression n)

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

int a = 30;

/* check the boolean condition using if statement */

/*If the Boolean expression evaluates to true, then the if block will be executed,
else then else if  block will be executed,Otherwise else will be Executed*/

/*Note : you can able to have any number of else if condition*/

/*In this 'a' is decleared as 30 , therefore when the condition is true then that particular if else block will be executed and remainings are ignored by the complier*/

if( a == 0 )

{

printf("\na is ZERO\n" );

printf("\nIF STATEMENT IS EXECUTED\n");

}

else if( a == 10 )

{

printf("\na is TEN\n" );

printf("\nFIRST ELSE IF STATEMENT IS EXECUTED\n");

}

else if( a == 20 )

{

printf("\na is TWENTY\n" );

printf("\nSECOND ELSE IF STATEMENT IS EXECUTED\n");

}

else if( a == 30 )

{

printf("\na is THRITY\n" );

printf("\nTHRID ELSE IF STATEMENT IS EXECUTED\n");

}

else if( a == 40 )

{

printf("\na is FOURTY\n" );

printf("\nFOURTH ELSE IF STATEMENT IS EXECUTED\n");

}

else

{

printf("\na is MORE THAN FOURTY20\n" );

printf("\nELSE STATEMENT IS EXECUTED\n");

}

printf("\nvalue of a is : %d\n", a);

}