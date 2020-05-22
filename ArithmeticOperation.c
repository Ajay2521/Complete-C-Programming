/*In this program we will be seeing all the Arithemtic Operators like addition , subtraction,multiplication,dividion, modulus etc.. avaliable in C*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

/*Declearing Variable 'a=21' Variable 'b=10' and creating a Variable 'c' with no initial value declear*/ 

int a = 21;

int b = 10;

int c ;

/*Addition Operation which is used to add the Value present in the Variable 'a' and 'b' and store the Result in Variable 'c'*/

c = a + b;

printf("\nThe Addition of %d and %d  is c = %d\n",a,b,c );

/*Subtraction Operation which is used to Subtract the Value from Variable 'b' to 'a' and store the Result in Variable 'c'*/

c = b - a;

printf("\nThe Subtarction of %d from %d is c = %d\n",b,a,c );

/*Multiplication Operation which is used to Multiply the Value present in the  Variable 'a' and 'b' and store the Result in Variable 'c'*/

c = a * b;

printf("\nThe Multiplication of %d and %d is c = %d\n", a,b,c );

/*Division Operation which is used to Divide the Value from Variable 'a' by 'b' and store the Result in Variable 'c'*/

c = a / b;

printf("\nThe Division of %d by %d is c = %d\n",a,b, c );

/*Modulus Operation which is used to give the remainder when it is divided  the Value from Variable 'a' by 'b' and store the Result in Variable 'c'*/

c = a % b;

printf("\nThe Modulus of %d by %d is c = %d\n",a,b,c );

/*Increment operator is used to increases the integer value by one.*/

c = a++;

printf("/nThe Increment Value of %d is c = %d\n",a,c );

/*Decrement operator is used to decreases the integer value by one.*/

c = a--;

printf("/nThe Decrement Value of %d is c = %d\n",a,c );

}
