/* Seth Szymanski
 * Chapter 3 Assignment
 * (GCC) 4.2.1
 * Write an encryption and decryption program.
 * */
#include <stdio.h>

/* function main begins program execution */
int main ( void )
{
	int input, output, ones, tens, hundreds, thousands;
	int mode = 0;

	printf("Encode (1) Decode (2) : ");
	scanf("%d", &mode);

	printf("Enter a  four digit number: ");
	scanf("%d", &input);

	ones = input % 10;
	input /= 10;
	tens = input % 10;
	input /= 10;
	hundreds = input % 10;
	input /= 10;
	thousands = input;
/*	printf("%d\n", ones);
	printf("%d\n", tens);
	printf("%d\n", hundreds);
	printf("%d\n", thousands);
*/
	//Encode
	if (mode == 1) { //encode
		ones = (ones + 7) % 10;
		tens = (tens + 7) % 10;
		hundreds = (hundreds + 7) % 10;
		thousands = (thousands + 7) % 10;
	}

	//Decode
	if (mode == 2) {
		ones = (ones + 3) % 10;
		tens = (tens + 3) % 10;
		hundreds = (hundreds + 3) % 10;
		thousands = (thousands + 3) % 10;
	}

	//Print swapped digits
	printf("%d", tens);
	printf("%d", ones);
	printf("%d", thousands);
	printf("%d\n", hundreds);

	return 0; /*indicate that program ended successfully */
} /* end function main */
