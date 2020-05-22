/*In this program we will be seeing all the Relational Operators like equal , unequal, lesser than , lesser than or equal to , greater than , greater than or equal to etc.. avaliable in C*/

/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

/*Declearing Variable 'a=10' Variable 'b=20' and creating a Variable 'c' with no initial value declear*/ 

int a = 10;

int b = 20;

int c ;

/*Here I have used a  concept of if and if-else , Don't worry about it , i will be covering in the if and if else concept later on*/

/* Now checking for EQUAL TO condition that if a and b contains an equal or same value then it pass the condition else it will not pass the condition*/ 

if( a == b )

{

printf("\na is equal to b and EQUAL TO condition is Passed.\n" );

}

else

{

printf("\na is not equal to b and EQUAL TO condition is Not-Passed.\n" );

}

/* Now checking for NOT EQUAL TO condition that if a and b contains an non equal or different value then it pass the condition else it will not pass the condition*/ 

if( a != b )

{

printf("\na is not equal to b and NOT EQUAL TO condition is Passed.\n" );

}

else

{

printf("\na is equal to b and NOT EQUAL TO condition is Not-Passed.\n" );

}

/* Now checking for LESSER THAN condtion that if 'a' contains  a value lesser then 'b' then it pass the condition else it will not pass the condition*/ 

if ( a < b )

{

printf("\na is less than b and LESSER THAN condition is Passed.\n" );

}

else

{

printf("\na is not less than b and LESSER THAN condition is Not-Passed.\n" );

}

/* Now checking for GREATER THAN condtion that if 'a' contains  a value greater then 'b' then it pass the condition else it will not pass the condition*/ 

if ( a > b )

{

printf("\na is greater than b and GREATER THAN condition is Passed.\n" );

}

else

{

printf("\na is not greater than b and GREATER THAN condition is Not-Passed.\n" );

}

/* Now checking for LESSER THAN or EQUAL TO condtion that if 'a' contains  a value lesser then 'b'  or Equal to the value of 'b' then it pass the condition else it will not pass the condition*/ 

if ( a <= b )

{

printf("\na is either less than or equal to b and LESSER THAN or EQUAL TO condition is Passed. \n" );

}

else

{

printf("\na is either Not less than or Not equal to b and LESSER THAN or EQUAL TO condition is Not-Passed. \n" );

}

/* Now checking for GREATER THAN or EQUAL TO condtion that if 'a' contains  a value greater then 'b' or Equal to the value of 'b'  then it pass the condition else it will not pass the condition*/ 

if ( a >= b )

{

printf("\nb is either greater than or equal to b and GREATER THAN or EQUAL TO condition is Passed. \n" );

}

else

{

printf("\na is either Not great than or Not equal to b and GREATER THAN or EQUAL TO condition is Not-Passed. \n" );

}

}