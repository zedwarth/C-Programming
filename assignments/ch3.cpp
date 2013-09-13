/* Seth Szymanski
 * Chapter 3 Assignment
 * (GCC) 4.2.1
 * Write an encryption and decryption program.
 * */
#include <stdio.h>

/* function main begins program execution */
int main ( void )
{
	int input, mode, sentinel, ones, tens, hundreds, thousands;
	mode = sentinel = 0;

	do {

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
		
		//Encode
		if (mode == 1) { //encode
			ones = (ones + 7) % 10;
			tens = (tens + 7) % 10;
			hundreds = (hundreds + 7) % 10;
			thousands = (thousands + 7) % 10;
			printf("Encoded Digits: ");
		}

		//Decode
		if (mode == 2) {
			ones = (ones + 3) % 10;
			tens = (tens + 3) % 10;
			hundreds = (hundreds + 3) % 10;
			thousands = (thousands + 3) % 10;
			printf("Decoded Digits: ");
		}

		//Print swapped digits
		printf("%d", tens);
		printf("%d", ones);
		printf("%d", thousands);
		printf("%d\n", hundreds);

		//Countinue or Exit; Assume Exit
		printf("Continue (1) Exit (0): ");
		scanf("%d", &sentinel);

	}while (sentinel == 1);

	return 0; /*indicate that program ended successfully */
} /* end function main */
