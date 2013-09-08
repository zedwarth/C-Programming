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
	printf("Please input three integers.\n");
	printf("First: "); 
	scanf("%d", &a);
	printf("Second: "); 
	scanf("%d", &b);
	printf("Third: "); 
	scanf("%d", &c);

	//Find the smallest
	if (a == b) {
		smallest = a;
		if (smallest > c) {
			smallest = c;
		}
	}
	if (a < b) {
		smallest = a;
		if (smallest > 
	
	//Determine the larger number
	else{
		if (integer1 > integer2) {
			largest = integer1;
		}
		if (integer1 < integer2) {
			largest = integer2;
		}
		printf("The larger number is %d.\n", largest);
	}

	return 0; /*indicate that program ended successfully */
} /* end function main */
