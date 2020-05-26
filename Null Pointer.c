/*In this program we will be seeing about POINTERS in C Program*/
 
/*Pointer is a type of user defined variable which is used to store the ADDRESS of other variable*/

/*pointers are used for dynamic memory allocation ,which is used when we create a dynamic program*/

/*In this program Lets see about NULL pointer*/

/*Null pointers are initialized when there is no actual variable to assign to the pointer variable*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

int *ptr;  /* pointer variable declaration */

ptr = NULL; /* Assigning a NULL pointer*/

printf("\nValue stored in variable \"ptr\" : %x\n", ptr );

printf("\nAddress of  variable \"ptr\" : %x\n", &ptr);

}