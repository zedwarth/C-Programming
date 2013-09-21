/* Fig. 4.10: fig04_10.c
 * Using the break statement in a for statement */
#include <stdio.h>

/* function main begins program execution */
int main ( void )
{
	int x; /* counter */

	/* loop 10 times */
	for ( x = 1; x <= 10; x++ ) {

		/* if x is 5, terminate loop */
		if ( x == 5 ) {
			break; /* break loop only if x is 5 */
		} /* end if */

		printf( "%d", x ); /* display value of x */
	} /* end for */

	printf( "\nBroke out of loop at x == %d\n", x );
	return 0; /*indicate that program ended successfully */
} /* end function main */
