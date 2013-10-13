/* Seth Szymanski
 * Chapter 7 Assignment 
 * clang version 3.3
 * Show what the 'mystery' function does.
 * */
#include <stdio.h>
#include <stdlib.h>

int mystery( const char *s1, const char *s2 ); //prototype

int main ( void )
{
	char string1[28] = "Once upon a midnight dreary";
	char string2[28] = "Once upon a midnight dreary";
	char string3[63] = "Once upon a midnight dreary, while I pondered weak and weary,";
	char string4[58] = "Over many a quaint and curious volume of forgotten lore,";

	printf( "When two identical strings are past, mystery returns: 1\n" );
	printf( "Example:\nstring1 is: %s\nstring2 is: %s\n", string1, string2 );
	printf( "mystery( string1, string2 ) %d\n\n", mystery( string1, string2 ) );

	printf( "When two strings are of different lengths but identical up until the\nend of the smaller string, mystery returns: 1\n" );
	printf( "Example:\nstring1 is: %s\nstring3 is: %s\n", string1, string3 );
	printf( "mystery( string1, string3 ) %d\n\n", mystery( string1, string3 ) );

	printf( "When two strings are different, mystery returns: 0\n");
	printf( "Example:\nstring1 is: %s\nstring4 is: %s\n", string1, string4 );
	printf( "mystery( string1, string4 ) %d\n\n", mystery( string1, string4 ) );

	system("pause");
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
