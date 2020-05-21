/*inculding stdio and limits preprocessor*/

#include <stdio.h>
#include <limits.h>

/*main function of the program*/
int main()
{
/*c as data types like int , shortint, float, char , singned , unsigned etc...*/

/*sizeof is a predefined function used to find the size of a variable or data type*/

/*In this program is have used '/n' in lot of places , it a special character or excape sequence used for next line , Don't worry this topic will be covered later on */

/* finding storage size for int*/

printf("\nStorage size for int : %d \n", sizeof(int));

printf("\nStorage size for unsigned int : %d \n", sizeof(unsigned int));

printf("\nStorage size for signed int : %d \n", sizeof(signed int));

/* finding storage size for char*/

printf("\nStorage size for char : %d \n", sizeof(char));

printf("\nStorage size for unsigned char : %d \n", sizeof(unsigned char));

printf("\nStorage size for signed char : %d \n", sizeof(signed char));

/* finding storage size for short*/

printf("\nStorage size for short : %d \n", sizeof(short));

printf("\nStorage size for unsigned short : %d \n", sizeof(unsigned short));

printf("\nStorage size for signed short : %d \n", sizeof(signed short));

/* finding storage size for long*/

printf("\nStorage size for long : %d \n", sizeof(long));

printf("\nStorage size for unsigned long : %d \n", sizeof(unsigned long));

printf("\nStorage size for signed long : %d \n", sizeof(signed long));

/* finding storage size for float*/

printf("\nStorage size for float : %d \n", sizeof(float));

/* finding storage size for double*/

printf("\nStorage size for double : %d \n", sizeof(double));

/* finding storage size for long double*/

printf("\nStorage size for long double : %d \n", sizeof(long double));

}