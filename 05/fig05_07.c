/* Fig. 5.7: fig05_07.c
 * Shifted, scaled integers produced by 1 + rand() % 6 */
#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main ( void )
{
	int i; /* counter */

	/* loop 20 times */
	for ( i = 1; i <= 20; i++ ) {

		/* pick random number from 1 to 6 and output it */
		printf( "%10d", 1 + ( rand() % 6 ) );

		/* if counter is divisible by 5, begin new line of output */
		if (i % 5 == 0 ) {
			printf( "\n" );
		} /* end if */
	} /* end for */

	return 0; /*indicate that program ended successfully */
} /* end function main */
