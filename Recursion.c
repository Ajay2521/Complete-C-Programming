/*In this program we will be seeing about RECURSION in C Program*/

/*Recursion is process of calling a function inside the same function. That is the process of repeating utem in a self similar way in c program*/

/*Syntax of Recursion in c program is

void recursion()

{

	 recursion();    

}

*/

/*let see recursion by finding a factorial for a number */

/*including preprocessor in the program*/

#include <stdio.h>

#include<errno.h>

#include<string.h>

/*declearing a function factorial()*/

int factorial(int i);

/*creating a main() function of the program*/

int main()

{

int i = 3 ;

printf("\nFactorial of %d is %d\n", i, factorial(i));

return 0;

}

int factorial(int i)

{

if(i <= 1)

{

return 1;

}

return i * factorial(i - 1);

}