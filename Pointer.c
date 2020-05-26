/*In this program we will be seeing about POINTERS in C Program*/
 
/*Pointer is a type of user defined variable which is used to store the ADDRESS of other variable*/

/*pointers are used for dynamic memory allocation ,which is used when we create a dynamic program*/

/*Synatc to declear a Pointer Variable

DataType *var-name;

*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

int a = 10;  /* actual variable declaration */

int *ptr;  /* pointer variable declaration */

ptr = &a; /* stores the address of "a" in pointer variable "ptr"*/

printf("\nValue of  variable A : %d\n", a );

printf("\nAddress of  variable A : %x\n", &a );

printf("\nValue stored in variable \"ptr\" : %x\n", ptr );

printf("\nAddress of  variable \"ptr\" : %x\n", &ptr);

printf("\nThe Variable to which pointer \"ptr\" has been assigned : %x\n", *ptr);

printf("\nThe value to which pointer \"ptr\" has been assigned : %d\n", *ptr);

}