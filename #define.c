/*In this program we will be seeing about #define in C Program*/

/*In C Program #define is a keyword which is used to define a variable with a value , which can be used anytime , anywhere in the program .Once a value is decleared in #define it remains same forever in the program*/

/*The variable define in #define must be of Capital Letters*/

/*In this program lets see a simple #define used in C Programming*/

/*Synatx to define a typedef in c programming

#define Variable value

*/

/*including preprocessor in the program*/

#include <stdio.h>

#include <string.h> 

#define PI 3.14 /*defining PI value to 3.14*/

/*creating a main() function of the program*/

int main()

{

printf("\nThe value of PI is : %f\n",PI);

}