/* Seth Szymanski
 * Chapter 4 Assignment 
 * clang-500.2.75
 * Calculate compounding interest using the formula: a = p(1+r)ⁿ
 * Adapted from example exercise Fig.4.6, 6th edition.
 * */
#include <stdio.h>
#include <math.h>

/* function main begins program execution */
int main ( void )
{
	//Declare Variables
	double principle = 1000.0;
	double amount, rate;
	int year;

	//For each Percentage Rate
	for (rate = .05; rate <= .1; rate += .01){
		// column headers
		printf("\n%21s%2d%%\n", "At ", int(rate*100));
		printf("%4s%21s\n", "Year", "Amount on Deposit");

		//Print the Amount for each Year
		for (year = 1; year <= 10; year++){
			amount =  principle * pow(1.0 + rate, year);
			printf("%4d%21.2f\n", year, amount);
		}
	}
	return 0; /*indicate that program ended successfully */
} /* end function main */
