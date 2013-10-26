/* Seth Szymanski
 * Chapter 9 Assignment 
 * clang version 3.3
 * Fahrenheit to Celsius conversions from 0 to 212.
 * */
#include <stdio.h>
#include <stdlib.h>

double toCelsius( int f); //function prototype
int main ( void )
{

	//Print Column Headers
	printf( "%3s\t%8s\n", "F", "C" );

	int f;
	for (f=0; f<=212; f++) {
		//Call toCelsius for f 0 to 212
		printf( "%3d\t%+8.3f\n", f, toCelsius(f) );
	}
	system("pause");
	return 0; /*indicate that program ended successfully */
} /* end function main */
double toCelsius( int f )
{
	return 5.0 / 9.0 * ( f - 32);
}
