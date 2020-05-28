/*In this program we will be seeing about STRUCTURE in C Program*/

/*Structure in C Programming is also know as a user defined Data type which is similar to array.*/

/*In Array we can able to store many data of a same data type*/

/*In Structure we can able to store many data of various data type*/

/*Structure can be accessed using member access operator ( . ) which is also called as DOT operator*/
 
/*Structure can be passed to function as same how a variable or pointer is passed to a function*/

/*In this program lets see a passing a structure to a function used in C Programming*/

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

};

/* function declaration */

void printStudent( struct Student student );

/*creating a main() function of the program*/

int main()

{

struct Student student1;

struct Student student2;

strcpy(student1.Name, "Maayon");

student1.RollNo = 1001001 ;

student1.MobileNo = 1010101010 ;

strcpy(student2.Name, "Tech Guru");

student2.RollNo = 1011011 ;

student2.MobileNo = 1212121212 ;

printStudent ( student1 );

printStudent ( student2 );

}


void printStudent( struct Student student )

{

printf("\nThe student Name is : %s\n",student.Name);

printf("\nThe student RollNo is : %d\n",student.RollNo);

printf("\nThe student MobileNo is : %d\n",student.MobileNo);

}