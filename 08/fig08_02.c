/* Fig. 8.2: fig08_02.c
 * Using functions isdigit, isalpha, isalnum, and isxdigit */
#include <stdio.h>
#include <ctype.h>

int main ( void )
{
	printf( "%s\n%s%s\n%s%s\n\n", "According to isdigit: "
		isdigit( '8' ) ? "8 is a " : "8 is not a ", "digit",
		isdigit( '#' ) ? "# is a " : "# is not a ", "digit" );


	printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
		"According to isalpha:",
		isalpha( 'A' ) ? "A is a " : "A is not a ", "letter",



'8' ) ? "8 is a " : "8 is not a ", "digit",
		isdigit( '#' ) ? "# is a " : "# is not a ", "digit" );

	return 0; /*indicate successful termination */
} /* end main */
