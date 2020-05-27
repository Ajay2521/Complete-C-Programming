/*In this program we will be seeing about POINTERS in C Program*/
 
/*Pointer is a type of user defined variable which is used to store the ADDRESS of other variable*/

/*pointers are used for dynamic memory allocation ,which is used when we create a dynamic program*/

/*In this program lets see about Array of pointer in aprogram*/

/*Array of pointer is assigning a Array to any of the pointer variable*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

int arr[] = {10, 20, 30,40};

int i, *ptr[5];

/* let us have array address in pointer */

for ( i = 0 ; i < 4 ; i++ )

{

ptr[i] = &arr[i];

}

/*printing the value and address of pointer variable*/

for ( i = 0 ; i < 4 ; i++ )

{
	
	printf("\nAddress of arr[%d] = %x\n", i, ptr[i] );

	printf("\nValue of arr[%d] = %d\n", i, *ptr[i] );
	
	
}

}