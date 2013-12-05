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

struct toolData tool = { 0, "", 0.0, 0 }; //blank

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
		if ( ( cfPtr = fopen( "hardware.dat", "wb+" ) ) == NULL ) { 
			printf( "File could not be opened.\n" );
		} 
		else {
			for ( i = 1; i <= 100; i++ ) {
				fwrite( &tool, sizeof( struct toolData ), 1, cfPtr );
			}
			fclose ( cfPtr ); /* close the file */
			printf( "New file made.\n" );
		}
	}

	if ( ( cfPtr = fopen( "hardware.dat", "rb+" ) ) == NULL ) {
		printf( "File could not be opened.\n" );
	} /* end if */
	else {
		printf( "Previous file opened.\n" );
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

	printf( "Enter request\n\n"
		"1 - Input new tool or update an existing tool\n\n"
		"2 - Delete a tool\n\n"
		"3 - List all tools\n\n"
		"4 - Exit\n\n? " );

	scanf( "%d", &menuChoice );  /* menu input */
	return menuChoice;
} /* end function */

void updateTool( FILE *cfPtr )
{
	int record;

	printf("\nEnter record number ( 1 to 100, 0 to return to main menu )\n\n? ");
	scanf( "%d", &record );

	while ( record != 0 ) {
		/* Blank tool and fill with user input */
		struct toolData tool = { 0, "", 0.0, 0 };  
		printf( "Enter tool name, quantity, cost\n\n?" );
		scanf( "%s%d%lf", tool.toolName, &tool.quantity, &tool.cost );
		tool.recordNum = record;

		/* fseek to correct location in file */
		fseek( cfPtr, ( record -1 ) * sizeof( struct toolData ), SEEK_SET );

		/* fwrite new record information */
		fwrite( &tool, sizeof( struct toolData ), 1, cfPtr );

		printf("\nEnter record number ( 1 to 100, 0 to return to main menu )\n\n? ");
		scanf( "%d", &record );
	} 
}


void deleteTool( FILE *cfPtr )
{
	printf("deleteTool function");
}
void listTool( FILE *cfPtr )
{
	/* Print Header */
	printf( "%-10s%-20s%-10s%-5s\n\n", "Record #", "Tool name", "Quantity", "Cost" );

	/* Loop through Records */
	while ( !feof( cfPtr ) ) {
		fread( &tool, sizeof( struct toolData ), 1, cfPtr );

		/* Print if not blank */
		if ( tool.recordNum != 0 ) {
			printf( "%-10d%-20s%-10d%-.2f\n\n", tool.recordNum, tool.toolName, tool.quantity, tool.cost );
		}
	}
}
