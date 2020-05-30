/*In this program we will be seeing about TYPECAST in C Program*/

/*In this program let see how to how to typecast a variable in c program.*/

/*Typecast ia method used in c program for changing a datatype of one variable to another variable in c programming*/

/*syntax for typecast is

(type_name ) expression

*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

void main()

{

int a= 200;

float b;

double c;

b = ( float) a / 3 ;

printf("\nThe value of  'b' is : %f\n",b);

c = ( double ) a / 3 ; 

printf("\nThe value of  'c' is : %lf\n",c);

}