/*In this program we will be seeing about LOOPS in C Program*/

/*In C while, do while, for are different loop Statements , which is used to execute certain number of codes for certain number of times. That is the code inside the loop will be execute certain number of times till the condition fails and loop comes out of the scope.*/

/*In this Example lets see how NESTED LOOP works in a program.*/

/*Nested loops is similar to loop concept but where in this nested loop a loop can be nested another loop.*/
 
/*Syntax of nested for loop

for ( init ; condition ; increment )

{

	for ( init ; condition ; increment )

	{

		Statement(S) / block of code;

	}

	Statement(S) / block of code;

}

*/

/*Syntax of nested While loop

while ( condition )

{

	while ( condition )

	{

		Statement(S) / block of code;

	}

	Statement(S) / block of code;

}

*/

/*Syntax of nested do While loop

do

{

	Statement(S) / block of code;
	
	do

	{

		Statement(S) / block of code;

	}while ( condition );

}while ( condition );

*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

for ( int i = 1 ; i <= 5 ; i++)

{

printf("\nOUTER FOR LOOP is executed for %d\n",i);

	for ( int j = 1 ; j <= 5 ; j++)

	{

	printf("\nINNER FOR LOOP is executed for %d\n",j);

	}

}
  
}