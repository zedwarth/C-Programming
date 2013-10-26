/* Seth Szymanski
 * Chapter 8 Assignment 
 * clang version 3.3
 * Randomly generated sentences.
 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

/* function main begins program execution */
int main ( void )
{
	char sentence[50];  //Hold sentence to be printed
	//Arrays of words to be randomly chosen 
	char *article[]={"the", "one", "a", "some", "any"};
	char *noun[]={"boy", "girl", "dog", "town", "car"};
	char *verb[]={"drove", "jumped", "walked", "ran", "skipped"};
	char *preposition[]={"to", "from", "over", "under", "on"};
	//For loop variable
	int i;

	//Seed Random from system clock
	srand ( time( NULL ) );

	for (i = 0; i<20; i++) {

		strcpy( sentence, article[rand()%5] ); //Copy fist word to array 'sentence'
		strcat( sentence, " " ); ///Concatenated the rest 
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

		sentence[0]=toupper( sentence[0] ); //Change first letter to uppercase

		puts( sentence ); //Print
	}
	system("pause");  //added for some environments 
	return 0; /* indicate that program ended successfully */
} /* end function main */
