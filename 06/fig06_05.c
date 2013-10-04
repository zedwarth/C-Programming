/* Fig. 6.5: fig06_05.c
 * Initialize the elements of array s to the even integers from 2 to 20 */
#include <stdio.h>
#define SIZE 10 /* maximum size of array */

/* function main begins program execution */
int main ( void )
{
	/* symbolic constant SIZE can be used to specify array size */
	int s[ SIZE ]; /* array s has SIZE elements */
	int j; /* counter */

	for ( j = 0; j < SIZE; j++ ) { /* set the values */
		s[ j ] = 2 + 2 * j;
	} /* end for */

	printf( "%s%13s\n", "Element", "Value" );

	/* output contents of array s in tabular format */
	for ( j = 0; j < SIZE; j++ ) {
		printf( "%7d%13d\n", j, s[ j ] );
	} /* end for */

	return 0; /*indicate that program ended successfully */
} /* end function main */
