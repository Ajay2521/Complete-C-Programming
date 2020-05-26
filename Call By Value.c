/*In this program we will be seeing about Functions  Arguments in C Program*/

/*If a function is to use arguments, it must declare variables that accept the
values of the arguments. These variables are called the formal parameters of
the function.*/

/*Ther are 2 types of calling a function in a c program they are "call by value" and " call by reference" . we will see one by one. */

/*In this program we will see about " CALL BY VALUE "*/

/*Call by value  is method used to call a function by creating a dumby or duplicate parameters rather than calling the function with the actual parameters. Thus this method passes the actual parameter to an formal parameter , and the function works with a formal parameter rather than with actual parameter. Thus any change in a formal parameter will have no effect with a actual parameters*/

/*By Default c program will be following this call by value method*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a user defined function called swap() , which is used to swap the values between them*/

void swap( int  x , int y ) /* int x , int y is a parameter list which is passed in the function swap */ 

{

/*function body which is used to swap two numbers*/

/*Declearing local varianble of function swap()*/

int temp;

temp = x ; /*by this value of x is stored into the variable temp*/

x = y ; /*by this value of y is stored into the variable x, that is x will have the value of y*/

y = temp ; /*by this value of temp is stored into the variable x, that is y will have the value of x*/

printf("\nValue of A , During swap : %d\n", x );

printf("\nValue of B , Before swap : %d\n", y );


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

swap( a , b ); /*calling a user defined function swap*/

printf("\nValue of A , After swap : %d\n", a );

printf("\nValue of  B , After swap : %d\n", b );

printf("\nThus value of A and B changes only when it is in the function swap , and remains same before and after the function call. Thus there i no change in value in main function.\n");

}