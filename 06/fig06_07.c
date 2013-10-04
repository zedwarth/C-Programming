/* Fig. 6.7: fig06_07.c
 * Student poll program */
#include <stdio.h>
#define RESPONSE_SIZE 40 /* define array sizes */
#define FREQUENCY_SIZE 11

/* function main begins program execution */
int main ( void )
{
	int answer; /* counter to loop through 40 responses */
	int rating; /* counter to loop through frequencies 1-10 */

	/* initialize frequency counters to 0 */
	int frequency[ FREQUENCY_SIZE ] = { 0 };

	/* place the survey responses in the response array */
	int responses [ RESPONSE_SIZE ] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
		1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
		5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

	/* for each answer, select value of an element of array response
	 * and use that value as subscript in array frequency to 
	 * determine element to increment */
	for ( answer = 0; answer < RESPONSE_SIZE; answer++ ) {
		++frequency[ responses [ answer ] ];
	} /* end for */

	/* display results */
	printf( "%s%17s\n", "Rating", "Frequency" );

	/* output the frequencies in a tabluar format */
	for ( rating = 1; rating < FREQUENCY_SIZE; rating++ ) {
		printf( "%6d%17d\n", rating, frequency[ rating ] );
	} /* end for */

	return 0; /*indicate that program ended successfully */
} /* end function main */
