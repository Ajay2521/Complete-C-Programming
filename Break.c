/*In this program we will be seeing about LOOPS CONTROL STATEMENTS in C Program*/

/*In C break , continue , goto are called as LOOP CONTROL STATEMENT, which is been used for contoling the flow of loop in a c program.*/

/*In this Example lets see how break works in a program.*/

/*break is a type of loop control statement which is used to terminate a loop, and execute remaining part of a program after loop .*/
 
/*Syntax of break

break;

*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

for ( int i = 1 ; i <= 10 ; i++)

{

	printf("\nValue of i = %d\n",i);

	if ( i == 7)

	{

		printf("\nBreak has been  applied . Thus the loop is terminated\n");

		break;

	}		

}

printf("\nBreak Statement has executed SUCCESSFULLY.....\n");

}