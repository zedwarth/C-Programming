/* Seth Szymanski
 * Chapter 5 Assignment
 * clang version 3.3
 * Coin flip simulation
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flipCoin( void );

/* function main begins program execution */
int main( void )
{
	int sentinal = 1;
	int i, toss, flip;
	srand( time( NULL ) );

	do{
		for( toss = 10; toss <= 1000000; toss = toss * 10 ){
			int heads = 0;
			int tails = 0;
			

			for( i = toss; i > 0; i-- ){
				flip = flipCoin();
				if( flip == 0) heads++;
				else tails++;
			}

			printf("Trials: %d\n", toss);
			printf("Head count: %9d Percent Heads %2.2f\n", heads, double(heads)/toss*100);
			printf("Tail count: %9d Percent Tails %2.2f\n", tails, double(tails)/toss*100);
		}

		printf("Try Again (1) Exit (0)");
		scanf("%d", &sentinal);
		
	}while(sentinal == 1);
	return 0; /*indicate that program ended successfully */
} /* end function main */

int flipCoin( void )
{

    //Return 0 or 1
    return ( rand() % 2);

//	return tails; //Source from a real coin flip; guaranteed to be random
}
