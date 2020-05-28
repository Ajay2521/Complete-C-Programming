/*In this program we will be seeing about INPUT AND OUTPUT in C Program*/

/*in this program lets see about gets() and puts() function in c program*/

/*In simple gets() is used to get all character as a input from user*/

/*In simple puts() is used to display all character from a variable*/

/*including preprocessor in the program*/

#include <stdio.h>

#include <string.h>

/*creating a main() function of the program*/

void main()

{

char c[50];

printf("\nEnter your name : ");

gets( c );

printf("\n\nYou have entered : ");

puts(c);

}