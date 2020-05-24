/*In this program we will be seeing Decision Making Statements*/

/*In C if, if else, nested if , switch , nested Switch are know as Decision Making Statements , which is used to have decision based up on the condition , the statement is executed*/

/*In this Example lets see how NESTED IF Statement works in a program*/

/*It is always legal in C programming to nest if-else statements, which means you
can use one if or else if statement inside another if or else if statement(s).*/

/*You can nest else if...else in the similar way as you have nested if statements.*/

/*You can nest  if...else in the similar way as you have nested if statements.*/

/*Syntax of NESTED IF statement

if(boolean_expression1)

{

statement 1;

statement 2;

.
.
.

statement n;

	if(boolean_expression2)

	{

	statement 1;

	statement 2;

	.
	.
	.

	statement n;

	}

}
*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

/* local variable definition */

int a = 10;

int  b = 20;

/* check the boolean condition using if statement */

/*In this "IF" condition is True therefore the statements/code inside will be Executed Succesfully*/

if( a  > 20 )

{

/* if condition is true then print the following */

printf("\na is GREATER THAN  20\n" );

	if( b == 20 )

	{

	/* if condition is true then print the following */

	printf("\nb is EQUAL TO 20\n" );

	}

printf("\nvalue of a is : %d\n", a);

printf("\nvalue of b is : %d\n", b);

}



/* check the boolean condition using if statement */

/*In this "IF" condition is True therefore the statements/code inside will be Executed Succesfully*/

if( a < 20 )

{

/* if condition is true then print the following */

printf("\na is LESS THAN 20\n" );

	if( b == 20 )

	{

	/* if condition is true then print the following */

	printf("\nb is EQUAL TO 20\n" );

	}

printf("\nvalue of a is : %d\n", a);

printf("\nvalue of b is : %d\n", b);

}

}