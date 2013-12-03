/* Seth Szymanski
 * Chapter 13 Assignment 
 * clang version 3.3
 * Define and use a macro SUMARRAY to sum the values of a numeric array
 * */
#include <stdio.h>
#define SUMARRAY( array, s ) for ( int size = s - 1; size >= 0; size-- )  sum += array[ size ];
	
int main ( void )
{
	int values[5] = { 10, 15, 18, 9, 8 };
	int sum = 0;

	SUMARRAY ( values, 5 );

	printf("The sum of the 'values' array is: %d\n", sum );

	return 0; /*indicate that program ended successfully */
} /* end function main */
