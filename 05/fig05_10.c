/* Fig. 5.10: fig05_10.c
 * Craps  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* contains prototype for function time */

/* enumeration constants represent game status */
enum Status { CONTINUE, WON, LOST };

int rollDice( void ); /* function prototype */

/* function main begins program execution */
int main ( void )
{
	int sum; /* sum of rolled dice */
	int myPoint; /* point earned */

	enum Status gameStatus; /* can contain CONTINUE, WON, or LOST */

	 /* randomize random number generator using current time */
	srand ( time( NULL ) );

	sum = rollDice(); /* first roll of the dice */

	/* determine game status based on sum of dice */
	switch( sum ) {

		/* win on first roll */
		case 7:
		case 11:
			gameStatus = WON;
			break;

		/* lose on first roll */
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

		/* remember point */
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf( "Point is %d\n", myPoint );
			break; /* optional */
	} /* end switch */

	/* while game not complete */
	while ( gameStatus == CONTINUE ) {
		sum = rollDice(); /* roll dice again */

		/* determine game status */
		if ( sum == myPoint ) { /* win by making point */
			gameStatus = WON; /* game over, player won */
		} /* end if */
		else {
			if ( sum == 7 ) { /* lose by rolling 7 */
				gameStatus = LOST; /* game over, player lost */
			} /*end if */
		} /* end else */
	} /* end while */

	/* display won or lost message */
	if ( gameStatus == WON ) { /* did player win? */
		printf( "Player wins\n" );
	} /* end if */
	else { /* player lost */
		printf( "Player loses\n" );
	} /* end else */

	return 0; /*indicate that program ended successfully */
} /* end function main */

/* roll dice, calculate sum and display results */
int rollDice( void )
{
	int die1; /* first die 8 */
	int die2; /* second die */
	int workSum; /* sum of dice */

	die1 = 1 + ( rand() % 6 ); /* pick random die1 value */
	die2 = 1 + ( rand() % 6 ); /* pick random die2 value */
	workSum = die1 + die2; /* sum die1 and die2 */

	/* display results of this roll */
	printf( "Player rolled %d + %d = %d\n", die1, die2, workSum );
	return workSum; /* return sum of dice */
} /* end function rollDice */
