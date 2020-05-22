/*In this program we will be seeing all the Assignment Operators like EQUAL TO, ADD And Assignement Operation , SUB  And Assignement Operation , MULTI  And Assignement Operation , DIVISION  And Assignement Operation , MODULUS  And Assignement Operation , LEFT SHIFT  And Assignement Operation , RIGHT SHIFT  And Assignement Operation , Bitewise AND  And Assignement Operation , Bitewise inclusive OR And Assignement Operation , Bitewise exclusive OR  And Assignement Operation etc... avaliable in C*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

/*Declearing Variable 'a=10' and creating a Variable 'c' with no initial value declear*/ 

int a = 10;

int c ;

/* =(EQUAL TO) Operator Example*/

c = a;

printf("\n = Operator Example, Value of c = %d\n", c );

/* += ( ADD And Assignement Operation) Operator Example*/

c += a;

printf("\n += ( ADD And Assignement Operation) Operator Example, Value of c = %d\n", c );

/* -= ( SUB And Assignement Operation) Operator Example*/

c -= a;

printf("\n -= ( SUB And Assignement Operation) Operator Example, Value of c = %d\n", c );

/* *= ( MULTI And Assignement Operation) Operator Example*/

c *= a;

printf("\n *= ( MULTI And Assignement Operation) Operator Example, Value of c = %d\n", c );

/* /= ( DIVISION And Assignement Operation) Operator Example*/

c /= a;

printf("\n /= ( DIVISION And Assignement Operation) Operator Example, Value of c = %d\n", c );

/* %= ( MODULUS And Assignement Operation) Operator Example*/

c = 200;

c %= a;

printf("\n %= ( MODULUS And Assignement Operation) Operator Example, Value of c = %d\n", c );

/* <<= ( LEFT SHIFT And Assignement Operation) Operator Example*/

c <<= 2;

printf("\n <<= ( LEFT SHIFT And Assignement Operation) Operator Example, Value of c = %d\n", c );

/* >>= ( RIGHT SHIFT And Assignement Operation) Operator Example*/

c >>= 2;

printf("\n >>= ( RIGHT SHIFT And Assignement Operation) Operator Example, Value of c = %d\n", c );

/* &= ( BITWISE AND And Assignement Operation) Operator Example*/

c &= 2;

printf("\n &= ( BITWISE AND And Assignement Operation) Operator Example, Value of c = %d\n", c );

/* ^= ( BITWISE EXCLUSIVE OR And Assignement Operation) Operator Example*/

c ^= 2;

printf("\n ^= ( BITWISE EXCLUSIVE OR And Assignement Operation) Operator Example, Value of c = %d\n", c );

/* ^= ( BITWISE INCLUSIVE OR And Assignement Operation) Operator Example*/

c |= 2;

printf("\n |= ( BITWISE INCLUSIVE OR And Assignement Operation) Operator Example, Value of c = %d\n", c );

}