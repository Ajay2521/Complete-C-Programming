/*In this program we will be seeing about POINTERS in C Program*/
 
/*Pointer is a type of user defined variable which is used to store the ADDRESS of other variable*/

/*pointers are used for dynamic memory allocation ,which is used when we create a dynamic program*/

/*In pointer we can able to do certain artimatic operation like increment,decrement...etc,,*/

/*In this program lets see about decrementing a pointer in aprogram*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

int arr[] = {10, 20, 30,40};

int i, *ptr;

/* let us have array address in pointer */

ptr = &arr[ 4 - 1 ];

for ( i = 4 ; i > 0 ; i-- )

{
	
	printf("\nAddress of arr[%d] = %x\n", i, ptr );

	printf("\nValue of arr[%d] = %d\n", i, *ptr );
	
	/* move to the next location */

	ptr--;
}

}