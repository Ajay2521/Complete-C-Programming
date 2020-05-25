/*In this program we will be seeing Decision Making Statements*/

/*In C if, if else, nested if , switch , nested Switch are know as Decision Making Statements , which is used to have decision based up on the condition , the statement is executed.*/

/*In this Example lets see how NESTED SWITCH Statement works in a program.*/

/*Switch contains a expression , if the expression meets any equality with the case, then the code/statement/block inside that cse will be executed and remaining cases will be ignored by the compiler.*/

/*Note : switch can have any number of case in it.*/
 
/*Syntax of NESTED Switch statement

switch(expressionq1){

case constant-expression :

statement(s);

switch(expressionq2){

	case constant-expression :

	statement(s);

	break; 

	case constant-expression :

	statement(s);

	break; 

	default :

	statement(s);

}

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

int choisea = 2 ; /*choise a= 2*/

int choiseb = 3 ;  /*choise b= 3*/ 

/*when the switch case meets the condition then that case will be executed*/

/*In this when case is equal to choise then than case will be executed*/

/*In this I have designed to execute normal cases*/

printf("\nlets see now normal cases in nested switch.\n");

switch(choisea)
{

case 1 :

           printf("\nCase 1 of OUTER SWITCH is Executed ,Since Choise of A is 1\n");
           
          switch(choiseb)
	{

	case 1 :

	           printf("\nCase 1 of INNER SWITCH is Executed ,Since Choise of B is 1\n");

	           break ; 


	case 2 :

	           printf("\nCase 2 of INNER SWITCH is Executed ,Since Choise of B is 2\n");

	           break ;

	case 3 :

	           printf("\nCase 3 of INNER SWITCH is Executed ,Since Choise of B is 3\n");

	           break ;

	case 4 :

	           printf("\nCase 4 of INNER SWITCH is Executed ,Since Choise of B is 4\n");

	           break ;

	default :

	           printf("\nSince no Case is met with Choise of B ,Therefore default case is Executed\n");

	           break ;

	}

           break ; 


case 2 :

           printf("\nCase 2 of OUTER SWITCH is Executed ,Since Choise of A is 2\n");
           
          switch(choiseb)
	{

	case 1 :

	           printf("\nCase 1 of INNER SWITCH is Executed ,Since Choise of B is 1\n");

	           break ; 


	case 2 :

	           printf("\nCase 2 of INNER SWITCH is Executed ,Since Choise of B is 2\n");

	           break ;

	case 3 :

	           printf("\nCase 3 of INNER SWITCH is Executed ,Since Choise of B is 3\n");

	           break ;

	case 4 :

	           printf("\nCase 4 of INNER SWITCH is Executed ,Since Choise of B is 4\n");

	           break ;

	default :

	           printf("\nSince no Case is met with Choise of B ,Therefore default case is Executed\n");

	           break ;

	}

           break ; 

case 3 :

           printf("\nCase 3 of OUTER SWITCH is Executed ,Since Choise of A is 3\n");

          switch(choiseb)
	{

	case 1 :

	           printf("\nCase 1 of INNER SWITCH is Executed ,Since Choise of B is 1\n");

	           break ; 


	case 2 :

	           printf("\nCase 2 of INNER SWITCH is Executed ,Since Choise of B is 2\n");

	           break ;

	case 3 :

	           printf("\nCase 3 of INNER SWITCH is Executed ,Since Choise of B is 3\n");

	           break ;

	case 4 :

	           printf("\nCase 4 of INNER SWITCH is Executed ,Since Choise of B is 4\n");

	           break ;

	default :

	           printf("\nSince no Case is met with Choise of B ,Therefore default case is Executed\n");

	           break ;

	}

           break ;

default :

           printf("\nSince no Case is met with Choise of A  ,Therefore default case is Executed\n");

           break ;

}

}