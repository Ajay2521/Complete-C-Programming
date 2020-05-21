/*inculding stdio and limits preprocessor*/

#include <stdio.h>
#include <limits.h>

/*main function of the program*/
int main()
{
/*c as data types like int , shortint, float, char , singned , unsigned etc...*/

/*sizeof is a predefined function used to find the size of a variable or data type*/

/* finding storage size for int*/

printf("Storage size for int : %d \n", sizeof(int)," byte");

printf("Storage size for unsigned int : %d \n", sizeof(unsigned int)," byte");

printf("Storage size for signed int : %d \n", sizeof(signed int)," byte");

/* finding storage size for char*/

printf("Storage size for char : %d \n", sizeof(char)," byte");

printf("Storage size for unsigned char : %d \n", sizeof(unsigned char)," byte");

printf("Storage size for signed char : %d \n", sizeof(signed char)," byte");

/* finding storage size for short*/

printf("Storage size for short : %d \n", sizeof(short)," byte");

printf("Storage size for unsigned short : %d \n", sizeof(unsigned short)," byte");

printf("Storage size for signed short : %d \n", sizeof(signed short)," byte");

/* finding storage size for long*/

printf("Storage size for long : %d \n", sizeof(long)," byte");

printf("Storage size for unsigned long : %d \n", sizeof(unsigned long)," byte");

printf("Storage size for signed long : %d \n", sizeof(signed long)," byte");

/* finding storage size for float*/

printf("Storage size for float : %d \n", sizeof(float)," byte");

/* finding storage size for double*/

printf("Storage size for double : %d \n", sizeof(double)," byte");

/* finding storage size for long double*/

printf("Storage size for long double : %d \n", sizeof(long double)," byte");

}