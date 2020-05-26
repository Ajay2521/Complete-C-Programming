/*In this program we will be seeing about SCOPE RULE in C Program*/

/*Scope rule is rule which is used for defining or declearing a variable inside a C Program*/

/*In C program a variable cane defined or decleared in this 3 places such as, inside the function,outside the function and as a formal parameter*/

/*Inside the function is called as "LOCAL VARIABLE"*/

/*Outside the function is called as "GOBAL VARIABLE"*/

/*As a definition of function is called as "FORMAL PARAMETRS"*/

/*including preprocessor in the program*/

#include <stdio.h>

/*Declearing A as a GOBAL VARIABLE*/

int a = 20;

/*creating a user defined function called add()*/

int add( int  x , int y ) /* int x , int y is a parameter list which is passed in the function add , is called as FORMAL PARAMETER*/ 

{

/*function body which is used to add two numbers*/

/*Declearing LOCAL VARIABLE of function add()*/

int sum;

sum = x +y ;

return sum ;

}

/*creating a main() function of the program*/

int main()

{

printf("\nThe Value of Gobal Variable is : %d \n",a);

/*Declearing LOCAL VARIABLE of function main()*/
 
int a = 10 ;

int b = 20;

int sum;

printf("\nThe Value of LOCAl Variable A is : %d \n",a);

printf("\nThe Value of LOCAL Variable B is : %d \n",b);

sum = add ( a , b ); /*calling the function add into the main program*/

printf("\nThe addition of value %d and % d is : %d\n", a , b , sum);

}