/* Seth Szymanski
 * gcc (GCC) 4.8.1 20130725 (prerelease)
 * Chapter 2, Assignment 1
 * input two integers and output the larger
 * */
#include <stdio.h>

/* function main begins program execution */
int main ( void )
{
	//Initialise variables
	int integer1, integer2, largest;

	//Prompt for input
	printf("This program will return the larger of two numbers.\n");
	printf("Enter an integer: "); 
	scanf("%d", &integer1);
	printf("Enter another integer: "); 
	scanf("%d", &integer2);

	//Check if numbers are equal
	if (integer1 == integer2) {
		printf("The integers are equal.\n");
	}
	
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
