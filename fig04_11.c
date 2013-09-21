/* Fig. 4.11: fig04_11.c
 * Using the break statement in a for statement */
#include <stdio.h>

/* function main begins program execution */
int main ( void )
{
	int x; /* counter */

	/* loop 10 times */
	for ( x = 1; x <= 10; x++ ) {

		/* if x is 5, continue with next iteration of loop */
		if ( x == 5 ) {
			continue; /* skip remaining code in loop body */
		} /* end if */

		printf( "%d ", x ); /* display value of x */
	} /* end for */

	printf( "\nUsed continue to skip printing the value 5\n" );
	return 0; /*indicate that program ended successfully */
} /* end function main */
