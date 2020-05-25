/*In this program we will be seeing about LOOPS in C Program*/

/*In C while, do while, for are different loop Statements , which is used to execute certain number of codes for certain number of times. That is the code inside the loop will be execute certain number of times till the condition fails and loop comes out of the scope.*/

/*In this Example lets see how DO WHILE LOOP works in a program.*/

/*Do While loop is kind of LOOP , which is used to execute the code for certain number of times, till the condition fails. Do While loop is also know as 'EXIT CHECK LOOP',that is loop will execute atleast once even though the condition fails.*/
 
/*Syntax of do while loop

do

{

	Statement(S) / block of code;

	Increment;

}while(condition)

*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

/* local variable definition */

int a = 0 ;

/*Do while loop*/

do

{

	printf("\nValue of a = %d\n",a);

	printf("\nThe DO WHILE LOOP is executed for %d\n",a);

 	a++;  /*Increment the value of variable a */

}while ( a < 0 ) ; /*do While loop condition,Where condition will be checked.*/ /*End of while loop */

printf("\nThe DO WHILE LOOP is executed for %d number of times\n",a);

}