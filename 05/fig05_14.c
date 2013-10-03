/* Fig. 5.14: fig05_14.c
 * Recursive factorial function */
#include <stdio.h>

long factorial( long number ); /* function prototype */

/* function main begins program execution */
int main ( void )
{
	int i; /* counter */

	/* loop 11 times; during each iteration, calculate
	 * fractorial( i ) and display results */
	for ( i = 0; i <= 10; i++ ) {
		printf( "%2d! = %ld\n", i, factorial( i ) );
	} /* end for */

	return 0; /*indicate that program ended successfully */
} /* end function main */

/* recursive definition of function factorial */
long factorial( long number )
{
	/* base case */
	if ( number <= 1 ) {
		return 1;
	}/* end if */
	else {/* recursive step */
		return ( number * factorial( number -1) );
	} /* end else */
} /* end function factorial */
