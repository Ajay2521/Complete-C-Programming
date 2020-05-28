/*In this program we will be seeing about STRUCTURE in C Program*/

/*Structure in C Programming is also know as a user defined Data type which is similar to array.*/

/*In Array we can able to store many data of a same data type*/

/*In Structure we can able to store many data of various data type*/

/*Structure can be accessed using member access operator ( . ) which is also called as DOT operator*/
 
/*In this program lets see a simple structure used in C Programming*/

/*Synatx to define a structture in c programming

struct [structure tag]

{

	member definition;

	member definition;
	
	...

	member definition;

} [one or more structure variables];

*/


/*including preprocessor in the program*/

#include <stdio.h>

#include <string.h> 

/*creating a structure of the program*/

struct Student

{
	
	char Name[50];

	int RollNo;

	int MobileNo;

}student;

/*creating a main() function of the program*/

int main()

{

strcpy(student.Name, "Maayon");

student.RollNo = 1001001 ;

student.MobileNo = 1010101010 ;

printf("\nThe student Name is : %s\n",student.Name);

printf("\nThe student RollNo is : %d\n",student.RollNo);

printf("\nThe student MobileNo is : %d\n",student.MobileNo);

}