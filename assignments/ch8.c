/* Seth Szymanski
 * Chapter 8 Assignment 
 * clang version 3.3
 * Description
 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <cytpe.h>

/* function main begins program execution */
int main ( void )
{
	char sentence[50];
	char *article[]={"the", "one", "a", "some", "any"};
	char *noun[]={"boy", "girl", "dog", "town", "car"};
	char *verb[]={"drove", "jumped", "walked", "ran", "skipped"};
	char *preposition[]={"to", "from", "over", "under", "on"};
	int i;

	srand ( time( NULL ) );

	for (i = 0; i<20; i++) {

		strcpy( sentence, article[rand()%5] );
		strcat( sentence, " " );
		strcat( sentence, noun[rand()%5] );
		strcat( sentence, " " );
		strcat( sentence, verb[rand()%5] );
		strcat( sentence, " " );
		strcat( sentence, preposition[rand()%5] );
		strcat( sentence, " " );
		strcat( sentence, article[rand()%5] );
		strcat( sentence, " " );
		strcat( sentence, noun[rand()%5] );
		strcat( sentence, "." );
		toupper( sentence[0] );

		puts( sentence );
	}
//	system("pause");
	return 0; /*indicate that program ended successfully */
} /* end function main */
