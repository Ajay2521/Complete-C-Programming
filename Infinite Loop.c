/*In this program we will be seeing about INFINITE LOOP in C Program*/

/*An infinite loop is a loop that run last long and inifinite loop occures only when thr condition wont fail forever*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

/*Note : This program will be resulting in infinite loop*/

/*Note : To STOP inifinite loop press Ctrl + c.*/

for ( ; ; )

{
printf("\ninfinite loop Runs for forever\n");

}

}