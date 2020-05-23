/*In this program we will be Operation Precedence in C it as same as BEDMAS which we use in Math*/

/*In C all postfix operation like braces,square bracket, increment , decrement have highgher precedence */

/*Then comes the Unary opertors followed by Division,Multiplication,Addition , Subtaraction , Then Shift Operation , Then comes Relatipnal Opeartion, Then Equalities ,All Bitwise Operation,Then comes All logical Operation,Then comes All Assignment  Operation*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

/*Declearing Variable 'a=20' ,Variable 'b=10' ,Variable 'c=15' , Variable 'd=25'and creating a Variable 'e' with no initial value declear*/ 

int a = 20;

int b = 10;

int c = 15;

int d = 25;

int e;

e = a + b * c / d ; /* 20 + 10 * 15 / 25 */ 

printf("\nValue of  a + b * c / d is e = %d\n", e );

e = ( a + b ) * ( c / d ) ; /* ( 20 + 10 ) * ( 15 / 25 ) */ 

printf("\nValue of ( a + b ) * ( c / d ) is e = %d\n", e );

e = ( a + b ) *  c / d  ; /* ( 20 + 10 ) * 15 / 25  */ 

printf("\nValue of ( a + b ) *  c / d  is e = %d\n", e );

e = ( ( a + b ) *  c ) / d  ; /* ( ( 20 + 10 ) * 15 ) / 25  */ 

printf("\nValue of ( ( a + b ) *  c ) / d  is e = %d\n", e );

e =  a + ( b  *  c / d ) ;  /* 20 + ( 10  * 15 / 25 ) */ 

printf("\nValue of  a +(  b *  c / d ) is e = %d\n", e );

e =  a + ( b  *  c ) / d  ; /*  20 + ( 10  *  15 ) / 25  */ 

printf("\nValue of  a + ( b  *  c ) / d   is e = %d\n", e );

e = ( a + ( b  *  c ) ) / d  ; /* ( 20 + ( 10  *  15 ) ) / 25  */ 

printf("\nValue of  ( a + ( b  *  c ) ) / d   is e = %d\n", e );

}




