/* Seth Szymanski
 * Chapter 11 Assignment 
 * clang version 3.3
 * Hardware Inventory 
 * */
#include <stdio.h>
#include <unistd.h>

/* tootData structure definition */
struct toolData {
	int recordNum; 		/* record number */
	char toolName [ 20 ]; 	/* tool name */
	double cost;   		/* tool cost */
	int quantity;  		/* amount of tool in stock */
};

/* Function Prototypes */
int enterChoice( void );
void updateTool( FILE *cfPtr );
void deleteTool( FILE *cfPtr );
void listTool( FILE *cfPtr );

int main ( void )
{
	FILE *cfPtr; /* file pointer */

	/* Check to see if database exists and if it doesn't, make it */
	if( access( "hardware.dat", F_OK ) == -1 ) {
		int i; /* counter */
		struct toolData blankTool = { 0, "", 0.0, 0 }; //blank
		if ( ( cfPtr = fopen( "hardware.dat", "rb+" ) ) == NULL ) { 
			printf( "File could not be opened.\n" );
		} 
		else {
			for ( i = 1; i <= 100; i++ ) {
				fwrite( &blankTool, sizeof( struct toolData ), 1, cfPtr );
			}
			fclose ( cfPtr ); /* close the file */
		}
	}

	if ( ( cfPtr = fopen( "hardware.dat", "rb+" ) ) == NULL ) {
		printf( "File could not be opened.\n" );
	} /* end if */
	else {
		/* Menu */
		int choice;

		while ( ( choice = enterChoice() ) != 4 ) {
			switch ( choice ) {
				/* Input new tool or update existing */
				case 1:
					updateTool( cfPtr );
					break;
				/* Delete tool */
				case 2:
					deleteTool( cfPtr );
					break;
				/* List Tools */
				case 3:
					listTool( cfPtr );
					break;
				default:
					printf( "That's not a valid choice\n" );
					break;
			} /* end switch */
		} /* end while */
		fclose( cfPtr ); /* close file */
	} /* end else */

	return 0; /*indicate that program ended successfully */
} /* end function main */

int enterChoice( void )
{
	int menuChoice; 

	printf( "\nEnter request\n"
		"1 - Input new tool or update an existing tool\n"
		"2 - Delete a tool\n"
		"3 - List all tools\n"
		"4 - Exit\n? " );

	scanf( "%d", &menuChoice );  /* menu input */
	return menuChoice;
} /* end function enterChoice */

void updateTool( FILE *cfPtr )
{
	/*
	struct toolData tool;
	int record;

	printf("\nEnter record number ( 1 to 100, 0 to return to main menu )\n\n? ");
	scanf( "%d", &record );

	if 


	while ( ( record != 0 )
	*/
	printf("updateTool funtion");
}


void deleteTool( FILE *cfPtr )
{
	printf("deleteTool function");
}
void listTool( FILE *cfPtr )
{
	printf("listTool function");
}
