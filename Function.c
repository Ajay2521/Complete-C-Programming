/*In this program we will be seeing about Functions in C Program*/

/*Function is a group of statements / code formed together for doing a specific task in a C program*/

/*NOTE : C program atleast must have one function , the default function is called as main()*/

/*Functions used are used to call specific code whenever needed in the program, Thus functions are used for code reuseability*/

/*Synatx for creating a user defined function 

return_type function_name( parameter list )

{

body of the function

}

*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a user defined function called add()*/

int add( int  x , int y ) /* int x , int y is a parameter list which is passed in the function add */ 

{

/*function body which is used to add two numbers*/

/*Declearing local varianble of function add()*/

int sum;

sum = x +y ;

return sum ;

}

/*creating a main() function of the program*/

int main()

{

/*Declearing local varianble of function main()*/
 
int a = 10 ;

int b = 20;

int c = 30;

int sum;

sum = add ( a , b ); /*calling the function add into the main program*/

printf("\nThe addition of value %d and % d is : %d\n", a , b , sum);

sum = add ( a , c ); /*calling the function add into the main program*/

printf("\nThe addition of value %d and % d is : %d\n", a , c , sum);

sum = add ( b , c ); /*calling the function add into the main program*/

printf("\nThe addition of value %d and % d is : %d\n", b , c , sum);

}