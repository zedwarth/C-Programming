/* Seth Szymanski
 * Chapter 7 Assignment 
 * clang version 3.3
 * Show what the 'mystery' function does.
 * */
#include <stdio.h>

int mystery( const char *s1, const char *s2 ); //prototype

/* function main begins program execution */
int main ( void )
{
	char string1[28] = "Once upon a midnight dreary";
	char string2[28] = "Once upon a midnight dreary";

	printf( "string1 is:\n%s\n\n string2 is:\n%s\n\n", string1, string2 );
	printf( "When two identical strings are past, mystery returns: %d\n",
			mystery( string1, string2 ) );

	char string3[63] = "Once upon a midnight dreary, while I pondered weak and weary,";
	printf( "string1 is:\n%s\n\n string3 is:\n%s\n\n", string1, string3 );
	printf( "When two strings are identical up until the length of the smaller string, mystery also returns: %d\n", mystery( string1, string3 ) );


	return 0; /*indicate that program ended successfully */
} /* end function main */

//mystery funtion
int mystery( const char *s1, const char *s2 ) {
	//Increments through each string using pointer
	//arithmetic until the reaching the null character
	for ( ; *s1 != '\0' && *s2 != '\0'; s1++, s2++ ) {
		//If the characters are not equal return zero
		if( *s1 != *s2 ) {
			return 0;
		}//end if
	}// end for
	//If the all the charters are identical up to the end
	//of one of the strings, return 1 (error)
	return 1;
}
