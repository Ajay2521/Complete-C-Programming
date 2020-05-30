/*In this program we will be seeing about ERROR HANDLING in C Program*/

/*In this program let see how to handle errors in c program.*/

/*Error handling is a method to handle all the occurance of errors in c programming*/

/*note c program doesn't provide direct support to error handling*/

/*including preprocessor in the program*/

#include <stdio.h>

#include<errno.h>

#include<string.h>

/*creating a main() function of the program*/

void main()

{

int errnum;

int errno;

/*trying to open an file which is not existing*/

FILE *fileptr = fopen ("123456.txt", "r");

if (fileptr == NULL)

{

errnum = errno;

perror("\nError printed by perror ");

fprintf(stderr, "\n\nError opening file : %s\n", strerror( errnum ));

}

else

{

fclose (fileptr);

}

}