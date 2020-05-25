/*In this program we will be seeing about LOOPS in C Program*/

/*In C while, do while, for are different loop Statements , which is used to execute certain number of codes for certain number of times. That is the code inside the loop will be execute certain number of times till the condition fails and loop comes out of the scope.*/

/*In this Example lets see how FOR LOOP works in a program.*/

/*for loop is kind of LOOP , which is used to execute the code for certain number of times, till the condition fails. for loop is also know as predefined loops , which is the user might know how many times will the loop being executed.that is loop will be execute only is the condition is True, if the condition is fails then the loop stop executing.*/
 
/*Syntax of for loop

for ( init ; condition ; increment )

{

	Statement(S) / block of code;

}

*/

/*In for loop the initiation, condition and incrementation will be occcured as same line */

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

int a ;

for ( a = 1 ; a <= 10 ; a++ )  /*for loop initalization is used to initalize the loop varaiable which is to be executed,  for loop is condition,Where condition will be checked, Increment is used to increment the value of the variable.*/

{

	printf("\nValue of a = %d\n",a);

	printf("\nThe FOR LOOP is executed for %d\n",a);

} /*End of for loop */

printf("\nThe FOR LOOP is executed for %d number of times\n",a-=1);

}