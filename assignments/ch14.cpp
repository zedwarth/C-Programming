/* Seth Szymanski
 * Chapter 14 Assignment 
 * clang version 3.3
 * Calculates the product of a series of integers
 * using variable-length argument list.
 * */
#include <stdio.h>
#include <stdarg.h>

long multiply ( int i, ... ); /* prototype */

int main ( void )
{
	long a = 5, b = 19, c = 82, d = 12, e = 8, f = 72, g = 42, z = 0;

	printf("The product of %ld and %ld is: %ld\n", c, a, multiply( 2, c, a ));
	printf("The product of %ld, %ld, and %ld is: %ld\n", b, e, g, multiply( 3, b, e, g ));
	printf("The product of %ld, %ld, %ld, and %ld is: %ld\n", f, c, a, g, multiply( 4, f, c, a, g ));
	printf("The product of %ld, %ld, %ld, %ld, and %ld is: %ld\n", f, c, z, g, a, multiply( 5, f, c, z, g, a ));
	return 0; /*indicate that program ended successfully */
} /* end function main */

long multiply ( int i, ... )
{
	long product; /* variable that holds the product */
	int j; 
	va_list ap;

	va_start( ap, i );

	/* Set product to the first argument, increment ap */
	product = va_arg( ap, long );

	for ( j = 2; j <= i; j++ ) {
		product *= va_arg( ap, long );
	}
	va_end( ap );
	
	return product;
} /* end function */
