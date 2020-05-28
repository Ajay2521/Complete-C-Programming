/*In this program we will be seeing about TypeDef in C Program*/

/*In C Program typedef is a keyword which is used to give a type to a new name .That is we can able to assign a data type functionallity to a newly decleared variable/name.*/

/*In this program lets see a simple typedef used in C Programming*/

/*Synatx to define a typedef in c programming

typedef DataType NewName;

*/


/*including preprocessor in the program*/

#include <stdio.h>

#include <string.h> 

/*creating a main() function of the program*/

int main()

{

typedef int Number ;

typedef double RealNumber ;

typedef char Character ;

Number a ;

RealNumber b ;

Character c;

printf("\nSize of Number is ::: %d\n",sizeof(Number));

printf("\nSize of RealNumber is ::: %d\n",sizeof(RealNumber));

printf("\nSize of Character is ::: %d\n",sizeof(Character));

printf("\nSize of a Variable which is defined as Number \"a\" is ::: %d\n",sizeof(a));

printf("\nSize of a Variable which is defined as RealNumber \"b\" is ::: %d\n",sizeof(b));

printf("\nSize of a Variable which is defined as Character \"c\" is ::: %d\n",sizeof(c));

}