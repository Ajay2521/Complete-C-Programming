/*In this program we will be seeing about FILES in C Program*/

/*In this program let see how to open or write in a txt file in c program.*/

/*fopen() is a function used to open a file or create a file in c program*/

/*fclose() is a function used to close a file in c program*/

/*synatx for fopen()

FILE *fopen( const char * filename, const char * mode );

*/

/*filename is the name of the file*/

/*mode is in which mode the file is used*/

/*There are  6 types of mode to read files. They are*/

/* 1 - 'r' = open in read only mode.*/

/* 2 - 'w' = open in write only mode.*/
 
/* 3 - 'a' = open in append only mode.*/

/* 4 - 'r+' = open in both read and write mode.*/

/* 5 - 'w+' = open in read and write mode.*/

/* 6 - 'a+' = open in read and write mode.Reading is done from beginning and write can only be appended*/

/*In this program let see about how to create / open a file and write into that file*/

/*synatx for writing into file is

fprintf(fp ,"content");

or 

fputs("content",fp);

*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

void main()

{

/*opening file in write and read mode*/

FILE *fileptr = fopen("C:/Users/MAAYON/Desktop/c/Maayon.txt", "w+");

/*writing using fprintf()*/

fprintf(fileptr, "This is Maayon...\n");

/*writing using fputs()*/

fputs("\nThis is my first program in Files in C Program...\n", fileptr);

fclose(fileptr);

}