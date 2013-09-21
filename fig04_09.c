/* Fig. 4.9: fig04_09.c
 * Using the do/while repetition statement */
#include <stdio.h>

/* function main begins program execution */
int main ( void )
{
	int counter = 1; /* initialize counter */

	do {
		printf( "%d ", counter ); /* display counter */
	} while ( ++counter <= 10 ); /* end do...while */
	printf("\n");

	return 0; /*indicate that program ended successfully */
} /* end function main */
