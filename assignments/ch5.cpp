/* Seth Szymanski
 * Chapter 5 Assignment 
 * clang version 3.3
 * Coin flip simulation
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flipCoin( int );

/* function main begins program execution */
int main( void )
{
	do { 
	int trials = 10;

		while (trails <= 1000000){
	int heads = 0;
	int tails = 0;
			for( count = trails; count  >= 0; count--) {
				if ( flipCoin == 0 ) {
					heads++;
				}
				else {
					tails++
				}
				printf("Trials: %d\n", count);
				printf("Head count: %9d Percent Heads %2.2f\n", heads, float(heads/count);
				printf("Tail count: %9d Percent Tails %2.2f\n", tails, float(tails/count);
				}
				}

	} while countinue == 1;

	return 0; /*indicate that program ended successfully */
} /* end function main */

int flipCoin( count );
{
	//Seed from System Clock
	srand( time( NULL ) );
	
	//Return 0 or 1
	return ( rand() % 2); 

//	return tails; //Source from a real coin flip; guaranteed to be random
}


