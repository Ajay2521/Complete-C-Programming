/*In this program we will be seeing about UNIONS in C Program*/

/*Unions in C Programming is also know as a user defined Data type which is similar to Structure.*/

/*In Structure we can able to store many data of various data type*/

/*In Union we can able to store many data of various data type in c programming, in Same memoery location. That is even though many data type is defined but only one member can contain a value at a particular time*/

/*Thus Union data type is used to store the memory size which is higher in that Union declearation*/

/*Union can be accessed using member access operator ( . ) which is also called as DOT operator*/
 
/*In this program lets see a simple union in C Programming*/

/*Synatx to define a Union in c programming

union [union tag]

{

	member definition;

	member definition;
	
	...

	member definition;

} [one or more union variables];

*/

/*including preprocessor in the program*/

#include <stdio.h>

#include <string.h> 

/*creating a structure of the program*/

union Data

{

int a ; /*size of int is 4*/

float b ; /*size of float is 4*/

char c ; /*size of char is 1*/

double d ; /*size of double is 8*/

}data ;

/*creating a main() function of the program*/

int main()

{

printf("\nMemory size occupied by the INT Data Type in this Program is ::: %d\n",sizeof(data.a));

printf("\nMemory size occupied by the FLOAT Data Type in this Program is ::: %d\n",sizeof(data.b));

printf("\nMemory size occupied by the CHAR Data Type in this Program is ::: %d\n",sizeof(data.c));

printf("\nMemory size occupied by the DOUBLE Data Type in this Program is ::: %d\n",sizeof(data.d));

printf("\nMemory size occupied by the UNION Data Type in this Program is ::: %d\n",sizeof(data));

}

