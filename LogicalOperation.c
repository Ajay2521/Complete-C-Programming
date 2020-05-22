/*In this program we will be seeing all the Logical Operators like AND , OR , NOT avaliable in C*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

/*Declearing Variable 'a=0' Variable 'b=20' and creating a Variable 'c' with no initial value declear*/ 

int a = 0;

int b = 20;

int c ;

/* Now checking for AND condition that if a and b contains an  all NON Zero value then it pass the condition else it will not pass the condition*/ 

if ( a && b )

{

printf("\nCondition is True and LOGICAL AND condition is Passed.\n" );

}

else

{

printf("\nCondition is False and LOGICAL AND condition is Not -Passed.\n" );

}

/* Now checking for OR condition that if a and b contains an  any NON Zero value then it pass the condition else it will not pass the condition*/ 

if ( a || b )

{

printf("\nCondition is True and LOGICAL OR condition is Passed.\n" );

}

else
{

printf("\nCondition is False and LOGICAL OR condition is Not-Passed.\n" );

}

/* Now checking for NOT condition then it will pass the condition in Reverse Order such that If answer is True then Result will be printed as False, similarly If answer is False then Result will be printed as True*/ 

if ( !(a && b) )

{

printf("\nCondition is True and LOGICAL NOT condition is Passed.\n" );

}

else

{

printf("\nCondition is False and LOGICAL NOT condition is Not-Passed.\n" );

}

}
