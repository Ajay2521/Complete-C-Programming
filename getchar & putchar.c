/*In this program we will be seeing about INPUT AND OUTPUT in C Program*/

/*in this program lets see aboyt getchar() and putchar() function in c program*/

/*In simple getchar() is used to get only one character as a input from user*/

/*In simple putchar() is used to display only first character from a variable*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

void main()

{

printf("Enter your name : ");

char c;

c = getchar();

printf("\n\nYou have entered : ");

putchar(c);

}