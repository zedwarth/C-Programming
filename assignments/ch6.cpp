/* Seth Szymanski
 * Chapter 6 Assignment 
 * clang version 3.3
 * Given an upper limit, find and print the prime numbers
 * to that limit.  Use the Sieve of Eratosthenes.
 * */
#include <stdio.h>
#include <stdlib.h>

void markNonPrime( int z[], int prime, int limit ); // prototype

/* function main begins program execution */
int main ( void )
{
	int limit = 0; // User input limit, sets array size
	int primeCount = 0;
	int n; // Counters
	int primeN = 0;

	printf( "Enter the limit: " );
	scanf( "%d", &limit );
	printf( "\nPrimes up to %d\n", limit );

	//Declare array 'z' to hold the elements being considered 
	//from 2 (at index 2) to 'limit' (at index 'limit')
	int *z = ( int* ) malloc( limit * sizeof( int ) );  
	for ( n = 2; n < limit; n++ ) z[ n ] = n;

	//Check Memory was allocated
	if ( z == NULL ) {
		printf( "Error allocating memory!\n" ); 
		return 1; //return with failure
	}

	//Mark elements as zero if they aren't prime
	for ( n = 2; n < limit; n++ ) { //loop through array
		if  ( z[ n ] == 0 ) continue; //skip place if it's not prime
		else markNonPrime( z, n, limit );
	}

	//Count the Primes
	for ( n = 2; n < limit; n++ ) { //loop through array
		if  ( z[ n ] == 0 ) continue; //skip place if it's not prime
		else {
			primeCount++;
			printf( "%5d", n );
			if ( primeCount % 16 == 0 ) {
				printf("\n");
			}
		}
	}
	printf( "\nNumber of primes: %4d\n", primeCount );

/*	//Make new primeArray
	int primeArray[ primeCount ];
	for ( n = 2; n < limit; n++ ) { //loop through array
		if  ( z[ n ] == 0 ) continue; //skip place if it's not prime
		else {
			primeArray[ primeN ] = z[ n ];
			primeN++;
		}
	}*/

	return 0; /*indicate that program ended successfully */
} /* end function main */

// markNonPrime function  marks all numbers 
// divisible by index as zero in the array
void markNonPrime( int z[], int index, int limit )
{
	int prime = index;
	for ( index++; index < limit; index++ ) {
		if ( z[ index ] == 0 ) continue;
		else {
			//Test if index is divisible by prime
			//if it is change value to zero
			if ( z[ index ] % prime == 0 ) z[ index ] = 0;
		}
	}
}
