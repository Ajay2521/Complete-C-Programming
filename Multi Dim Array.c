/*In this program we will be seeing about ARRAY in C Program*/

/*Array in a C Program is a type of user Defined data type, which is used to store a Collection of data which have same data type.*/

/*ADVANTAGE OF ARRAY : When used need to store many values of same data type, he/she can't ale to declear so many Varaile, instead of that he/she can Create an simple Array to store many datas of similar Data Type. */

/*DISADVANTAGE : Storeing datas of different data type is not possible in array*/

/*IN THIS LET SEE A COMPLETE TWO / MULTI DIMENTIONAL ARRAY*/

/*Syntax to Declear a Two or Multi Dimentional ARRAY

DataType ArrayName [ ArraySize of 1 ] [ ArraySize of 2 ] ... [ArraySize of N ] = { ArraryElements }; 

*/

/*Array element can be accessed by using The Array index value , thus array's are stored using index , Usually Array index starts with ZERO.*/
 
/*including preprocessor in the program*/

#include <stdio.h>

/*creating a main() function of the program*/

int main()

{

/*Declearing an two dimension array of A*/

/*Example for Two Dimentional Array is MATRIX*/

int arrA[3][3] ={ 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9} ;

/*printing a data's present in an array A*/

for ( int i = 0 ; i < 3 ; i++)

{
	for ( int j = 0 ; j < 3 ; j++)

	{
	
		printf("\nA[%d][%d] = %d\n", i , j , arrA[i][j] );
 	}

}  

}