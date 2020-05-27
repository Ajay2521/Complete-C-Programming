/*In this program we will be seeing about POINTERS in C Program*/
 
/*Pointer is a type of user defined variable which is used to store the ADDRESS of other variable*/

/*pointers are used for dynamic memory allocation ,which is used when we create a dynamic program*/

/*Pointer To Pointer is a concept which is used to point one pointer variable to an another pointer variable . That is when a pointer to pointer concept is used, then one pointer points to address of a variable , and that pointer variable is used  to point to the address of that pointer variable , which is it is again points to the value of a initial variable*/
 
/*Synatx to declear a Pointer To Pointer Variable

DataType **var-name;

*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

int a = 10 ;  /* actual variable declaration */

int *ptr ;  /* pointer variable declaration */

int **pptr ; /* pointer to pointer variable declaration */

ptr = &a; /* stores the address of "a" in pointer variable "ptr"*/

pptr = &ptr; /* stores the address of "ptr" in pointer to pointer variable "pptr"*/

printf("\nValue of  variable A : %d\n", a );

printf("\nAddress of  variable A : %x\n", &a );

printf("\nValue stored in variable \"ptr\" : %x\n", ptr );

printf("\nAddress of  variable \"ptr\" : %x\n", &ptr);

printf("\nThe Variable to which pointer \"ptr\" has been assigned : %x\n", *ptr);

printf("\nThe value to which pointer \"ptr\" has been assigned : %d\n", *ptr);

printf("\nValue stored in variable \"pptr\" : %x\n", pptr );

printf("\nAddress of  variable \"pptr\" : %x\n", &pptr);

printf("\nThe Variable to which pointer \"pptr\" has been assigned : %x\n", **pptr);

printf("\nThe value to which pointer \"pptr\" has been assigned : %d\n", **pptr);

}