/*In this program we will be seeing all the Misc Operators like Sizeof,Adress , pointer , Conditional Expression avaliable in C*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

/*Declearing Variable 'a=10' of data type int  ,creating a Variable 'b' with no initial value  with datatype float and creating a Variable 'c' with no initial value  with datatype double declear and pointer is created*/ 

/*Note: No worries about pointer , address and conditional Expression, it will explained later on */

int a = 10;

float b;

double c;

int* ptr;

/* example of sizeof operator */

printf("\nSize of variable 'a' of data type int = %d\n", sizeof(a) );

printf("\nSize of variable 'b'  of data type float = %d\n", sizeof(b) );

printf("\nSize of variable 'c' of data type double = %d\n", sizeof(c) );

/* example of & and * operators */

/*Address(&) is used to return the address of a variable stored*/

ptr = &a;  /* 'ptr' now contains the address of 'a'*/

printf("\nvalue of a is %d\n", a);

printf("\nAddress of a is %d\n", &a);

printf("\nValue of *ptr is %d.\n", ptr);

printf("\n*ptr is %d.\n", *ptr);

/* example of ternary operator */

/*conditional operator is also known as Ternary Operator it is defined as when the condition is true then first expression will excuted , if the condition fails then second expression will be excuted . Syntax for Ternary Operator is "Variable = Condition ? Expression 1 :Expression2;"*/

int x = 10;

int y = 30;

int z = ( x < y ) ? x : y ;

printf( "\nValue of z is %d\n",z );

}