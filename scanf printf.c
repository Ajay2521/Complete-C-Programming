/*In this program we will be seeing about INPUT AND OUTPUT in C Program*/

/*in this program lets see about scanf() and printf() function in c program*/

/*In simple scanf() is used to get all character as a input from user*/

/*In simple printf() is used to display all character from a variable*/

/*most of the programer will be useing scanf() and printf() commonly*/

/*including preprocessor in the program*/

#include <stdio.h>

#include <string.h>

/*creating a main() function of the program*/

void main()

{

int age;

float income;

char name[50];

printf("\nEnter your name : ");

scanf( "%s",&name );

printf("\nEnter your age : ");

scanf( "%d",&age );

printf("\nEnter your income : ");

scanf( "%f",&income );

printf("\n\nYour name is : %s\n",name);

printf("\nYour age is : %d\n",age);

printf("\nYour income is : %f\n",income);

}