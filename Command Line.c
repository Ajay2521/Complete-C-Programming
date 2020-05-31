/*In this program we will be seeing about Command line Arguments in C Program*/

/*In C Program we can able to pass values from the command line is know as command line arguments*/

/*Command line argument is used when user want to control the program from outside rather than inside the program execution.*/

/*argc refers to number of arguments passed in the command line*/

/*argv[] is a pointer array which is used to point each argument passed in the program*/

/*command line argument is passed using main()*/

/*syntax for passing command line

int main ( int argc , char *argv[] )

*/

/*including preprocessor in the program*/

#include <stdio.h>

#include<stdlib.h>

#include <string.h>

/*defining a command line argument in c*/

int main( int argc , char *argv[] )

{

if ( argc == 2)

{
	
	printf("\nOne command line argument has been passed .\n ");

	printf("\nThe Argument which is passed in command line is : %s\n", argv[1]);
 
}

else if ( argc >= 2)

{

	printf("\nTwo Arguments have been passed.\n");

	printf("\nThe First Argument which is passed in command line is : %s\n", argv[1] );

	printf("\nThe Second Argument which is passed in command line is : %s\n", argv[2] );

}

else

{

	printf("\nArgument has not passed.\n");

}

}