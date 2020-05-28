/*In this program we will be seeing about TypeDef in C Program*/

/*In C Program typedef is a keyword which is used to give a type to a new name .That is we can able to assign a data type functionallity to a newly decleared variable/name.*/

/*we can also able to typedef a struct and union as simple as normal typedef*/
 
/*Synatx to define a typedef in c programming

typedef DataType NewName;

*/

/*In this program lets see a  Typedef in structure used in C Programming*/

/*Synatx to define a typedef in structture in c programming

typedef struct [structure tag]

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

/*creating a typedef structure of the program*/

typedef struct Student

{
	
	char Name[50];

	int RollNo;

	int MobileNo;

}student;

/*creating a main() function of the program*/

int main()

{

student students;

strcpy(students.Name, "Maayon");

students.RollNo = 1001001 ;

students.MobileNo = 1010101010 ;

printf("\nThe student Name is : %s\n",students.Name);

printf("\nThe student RollNo is : %d\n",students.RollNo);

printf("\nThe student MobileNo is : %d\n",students.MobileNo);

}