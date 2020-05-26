/*In this program we will be seeing about Functions  Arguments in C Program*/

/*If a function is to use arguments, it must declare variables that accept the
values of the arguments. These variables are called the formal parameters of
the function.*/

/*Ther are 2 types of calling a function in a c program they are "call by value" and " call by reference" . we will see one by one. */

/*In this program we will see about " CALL BY REFERENCE"*/

/*Call by reference is method used to call a function by using the address of the actual parameters. Thus this method passes the address of actual parameter to the function . Thus any change in a fuction will have an effect with a actual parameters of a main function.*/ 

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a user defined function called swap() , which is used to swap the values between them*/

void swap( int  *x , int *y ) /* int *x , int *y is a parameter list which is passed in the function swap */ 

{

/*function body which is used to swap two numbers*/

/*Declearing local varianble of function swap()*/

int temp;

temp = *x ; /*by this address of x is stored into the variable temp*/

*x = *y ; /*by this address of y is stored into the variable x, that is x will have the address of y*/

*y = temp ; /*by this value of temp is stored into the variable x, that is y will have the address of x*/

printf("\nValue of A , During swap : %d\n", *x );

printf("\nValue of B , Before swap : %d\n", *y );


return ;

}

/*creating a main() function of the program*/

int main()

{

/*Declearing local varianble of function main()*/
 
int a = 10 ;

int b = 20;

printf("\nValue of A , Before swap : %d\n", a );

printf("\nValue of B , Before swap : %d\n", b );

swap( &a , &b ); /*calling a user defined function swap*/

printf("\nValue of A , After swap : %d\n", a );

printf("\nValue of  B , After swap : %d\n", b );

printf("\nThus value of A and B changes when the function swap called , and remains same after the function call. Thus there is a change in value in main function.\n");

}