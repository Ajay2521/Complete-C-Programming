/*In this program we will be seeing about STRING in C Program*/

/*Strings in C Programming is also know as a One Dimensional Array of characters. Thus string contains a character Array which is terminated by a null character "\0"*/

/*By Default C compiler initialize a Null character at the end of every String . Therefore no woriies about the null character . Just have a note on it.*/
 
/*In this program lets see some string functons used in C Programming*/

/*including preprocessor in the program*/

#include <stdio.h>

#include <string.h> /*String.h is a predifined preprossor used to work with Strings in C Program*/

/*creating a main() function of the program*/

int main()

{

char str1[20] = "String";

char str2[20] = "Program";

char str3[20];

char str4[20] = "Strings";

/*strlen() is an perdefined function which is used find the length of the String */

/*Synatx for strcat() is

strlen( String Variable );

*/

printf("\nThe length of the String 1 \"%s\" is ::: %d\n", str1 , strlen(str1) );

printf("\nThe length of the String 2 \"%s\" is ::: %d\n", str1 , strlen(str2) );

printf("\nThe length of the String 4 \"%s\" is ::: %d\n", str4 , strlen(str4) );

/*strcpy() is an perdefined function which is used  copy a source String to the Destination String */

/*Synatx for strcpy() is

strcpy( Destination String Variable , Source String Variable ) ;

*/

strcpy(str3, str1);

printf("\nThe value which is copied to str3 from str1 is ::: %s\n", str3 );

/*strcpy() is an perdefined function which is used concatenates two strings together and place it at the end of first string variable*/

/*Synatx for strcat() is

strcat( String Variable 1 , String Variable 2 ) ;

*/

strcat( str1, str2);

printf("\nThe concatenates the two strings is ::: %s\n", str1 );

/*strchr() is an perdefined function which is used find the first occurrence of that character in a String */

/*Synatx for strchr() is

strlen( String Variable , 'character to be find' ) ;

*/

printf("\nThe first occurence of the finding character in String 1 \"%s\" is from ::: %s\n", str1 , strchr( str1 , 'g' ) );

/*strcmp() is an perdefined function which is used compare two strings , is the two string are same then it returns 0 , if first string is greater then second string then it return a value greater than 0,  if first string is lesser then second string then it return a value lesser than 0*/

/*Synatx for strcmp() is

strlen( String Variable 1 , String Variable 2 ) ;

*/

if ( strcmp( str3 , str4) == 0 )

{

printf("\nSince str3 and str4 is same which returns ZERO.Thus if statement is executed.\n");

}

else if ( strcmp( str3 , str4) < 0 )

{

printf("\nSince str3 and str4 is not same and str3 is lesser than ZERO which returns a value Lesser than ZERO.Thus else if statement is executed.\n");

}

else 

{

printf("\nSince str3 and str4 is not same and str3 is Greater than ZERO which returns a value Greater than ZERO.Thus else  statement is executed.\n");

}

/*strstr() is predefined function in string which is used for finding a occurance of one string in onther string, also know as substring finding*/

/*synatx for strstr()

strstr( string which is to be examined , string which we gonna found in examine string);

*/

char *strF;

strF = strstr( str1 , str3);

if (strF)

{

printf("\nThe Sub String of str2 is FOUND in str1.\n");

}

else

{

printf("\nThe Sub String of str2 is NOT FOUND in str1.\n");

}

}