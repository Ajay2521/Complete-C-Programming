/*In this program we will be seeing Decision Making Statements*/

/*In C if, if else, nested if , switch , nested Switch are know as Decision Making Statements , which is used to have decision based up on the condition , the statement is executed.*/

/*In this Example lets see how SWITCH Statement works in a program.*/

/*Switch contains a expression , if the expression meets any equality with the case, then the code/statement/block inside that cse will be executed and remaining cases will be ignored by the compiler.*/

/*Note : switch can have any number of case in it.*/
 
/*Syntax of Switch statement

switch(expression){

case constant-expression :

statement(s);

break; 

case constant-expression :

statement(s);

break; 

default :

statement(s);

}

*/

/*It is optional to have 'break statement' at end of each case, but it is good pratice to have 'break statement' at end of each case, since it breaks the remaining case and only execute needed case*/

/*When no cases statisfy the condition ,then default case will be executed*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

/* local variable definition */

int choise = 2 ;

/*when the switch case meets the condition then that case will be executed*/

/*In this when case is equal to choise then than case will be executed*/

/*In this I have designed to execute normal cases*/

printf("\nlets see now normal cases in switch.\n");

switch(choise)
{

case 1 :

           printf("\nCase 1 is Executed ,Since Choise is 1\n");

           break ; 


case 2 :

           printf("\nCase 2 is Executed ,Since Choise is 2\n");

           break ;

case 3 :

           printf("\nCase 3 is Executed ,Since Choise is 3\n");

           break ;

case 4 :

           printf("\nCase 4 is Executed ,Since Choise is 4\n");

           break ;

default :

           printf("\nSince no Case is met with Choise ,Therefore default case is Executed\n");

           break ;

}

/* Redefining local variable */

choise = 5 ;

/*when the switch case meets the condition then that case will be executed*/

/*In this when case is equal to choise then than case will be executed*/

/*In this I have designed to execute defalut case*/

printf("\nlets see now DEFAULT Case in switch.\n");

switch(choise)

{

case 1 :

           printf("\nCase 1 is Executed ,Since Choise is 1\n");

           break ; 


case 2 :

           printf("\nCase 2 is Executed ,Since Choise is 2\n");

           break ;

case 3 :

           printf("\nCase 3 is Executed ,Since Choise is 3\n");

           break ;

case 4 :

           printf("\nCase 4 is Executed ,Since Choise is 4\n");

           break ;

default :

           printf("\nSince no Case is met with Choise ,Therefore default case is Executed\n");

           break ;

}

}