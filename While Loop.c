/*In this program we will be seeing about LOOPS in C Program*/

/*In C while, do while, for are different loop Statements , which is used to execute certain number of codes for certain number of times. That is the code inside the loop will be execute certain number of times till the condition fails and loop comes out of the scope.*/

/*In this Example lets see how WHILE LOOP works in a program.*/

/*While loop is kind of LOOP , which is used to execute the code for certain number of times, till the condition fails. While loop is also know as 'ENTERY CHECK LOOP',that is loop will be execute only is the condition is True, if the condition is fails then the loop stop executing.*/
 
/*Syntax of while loop

while(condition)

{

	Statement(S) / block of code;

	Increment;

}

*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

/* local variable definition */

int a = 1 ;

/*while loop*/

while ( a <= 10) /*While loop condition,Where condition will be checked.*/

{

	printf("\nValue of a = %d\n",a);

	printf("\nThe WHILE LOOP is executed for %d\n",a);

 	a++;  /*Increment the value of variable a */

} /*End of while loop */

printf("\nThe WHILE LOOP is executed for %d number of times\n",a-=1);

}