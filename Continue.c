/*In this program we will be seeing about LOOPS CONTROL STATEMENTS in C Program*/

/*In C break , continue , goto are called as LOOP CONTROL STATEMENT, which is been used for contoling the flow of loop in a c program.*/

/*In this Example lets see how CONTINUE works in a program.*/

/*Continue is a type of loop control statement which is used to terminate only particular iteration, and execute next iteration of the loop.*/
 
/*Syntax of continue

continue;

*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

for ( int i = 1 ; i <= 10 ; i++)

{

	if ( i == 7)

	{
		
		printf("\nContinue has been  applied . Thus the next Iteration has taken placed by skipping this particular iteration\n");

		continue;

	}		

	printf("\nValue of i = %d\n",i);

}

printf("\nContinue Statement has executed SUCCESSFULLY.....\n");

}
