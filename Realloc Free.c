/*In this program we will be seeing about Memory Managemet in C Program*/

/*In C Program memory can be managed easy by using dynamic memory allocation */

/*In this program lets see a realloc() and free() used in C Programming*/

/*And lets see how to re-allocate memory in dynamic manner*/

/*And how to free the memory which is allocated dynammically*/

/*Synatx to define a realloc() in c programming

void *realloc(void *address , int newsize);

*/

/*Synatx to define a free() in c programming

void free(void *address );

*/

/*including preprocessor in the program*/

#include <stdio.h>

#include<stdlib.h>

#include <string.h>

int main()

{

char name[100];

/* allocate memory dynamically */

char *work;

strcpy(name, "Mayyon");

work = malloc( 30 * sizeof(char) );

if( work == NULL )

{

fprintf(stderr, "Error - unable to allocate required memory\n");

}

else

{

strcpy( work, "Maayon is a poet . ");

}

/* reallocating the memory*/

work = realloc( work , 100 * sizeof(char) );

if( work == NULL )

{

fprintf(stderr, "Error - unable to allocate required memory\n");

}

else

{

strcpy( work, "He own's a page in instagram called Maaya_kavi .");

}

printf("\nName = %s\n", name );

printf("\nWork : %s\n", work );

/*freeing memory */

free ( work );

}