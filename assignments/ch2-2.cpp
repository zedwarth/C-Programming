/* Seth Szymanski
 * gcc (GCC) 4.8.1 20130725 (prerelease)
 * Chapter 2, Assignment 2
 * input three integers and output the 
 * smallest, largest, sum, and average.
 * */
#include <stdio.h>

/* function main begins program execution */
int main ( void )
{
	//Initialise variables
	int a, b, c, smallest, largest, sum, average;

	//Prompt for input
	printf("Please enter three integers.\n");
	printf("First: "); 
	scanf("%d", &a);
	printf("Second: "); 
	scanf("%d", &b);
	printf("Third: "); 
	scanf("%d", &c);

	//Find the smallest
	if ((a <= b) & (a <= c)) {
		smallest = a;
	}
	if ((b <= a) & (b <= c)) {
		smallest = b;
	}
	if ((c <= a) & (c <= b)) {
		smallest = c;
	}

	//Find the largest
	if ((a >= b) & (a >= c)) {
		largest = a;
	}
	if ((b >= a) & (b >= c)) {
		largest = b;
	}
	if ((c >= a) & (c >= b)) {
		largest = c;
	}

	//Find the sum
	sum = a+b+c;

	//Find the average
	average = sum / 3;
	if ((sum % 3) >= 5) { //round up if appropriate
		average ++;
	}

	//Print the answers
	printf("The smallest is %d.\n", smallest);
	printf("The largest is %d.\n", largest);
	printf("The sum is %d.\n", sum);
	printf("The average is %d.\n", average);

	return 0; /*indicate that program ended successfully */
} /* end function main */
