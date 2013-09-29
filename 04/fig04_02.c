/* Fig. 4.2: fig04_02.c
 * */
#include <stdio.h>

/* function main begins program execution */
int main ( void )
{
	int counter; /* define counter */

	/* initialization, repetition condition, and increment
	 * are all included in the for statement header. */
	for ( counter = 1; counter <= 10; counter ++ ) {
		printf( "%d\n", counter );
	} /* end for */

	return 0; /*indicate that program ended successfully */
} /* end function main */
