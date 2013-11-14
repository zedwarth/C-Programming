/* Fig. 12.3: fig12_03.c
 * Operating and maintaining a list */
#include <stdio.h>
#include <stlib.h>

/* self-referential structure */
struct listNode {
	char data; /* each listNode contains a character */
	struct listNode *nextPtr; /* pointer to the next node */
}; /* end structure listNode */

typedef struct listNode ListNode; /* synonym for struct listNode */
typedef ListNode *ListNodePtr; /* synonym for ListNode* */

/* prototypes */
void insert( ListNodePtr *sPtr, char value );
char delete( ListNodePtr *sPtr, char value );
int isEmpty( ListNodePtr sPtr );
void printList( ListNodePtr currentPtr );
void instructions( void );

int main( void )
{
	ListNodePtr startPtr = NULL; /* initially there are no nodes */
	int choice; /* user's choice */
	char item; /* char entered by user */

	instructions(); /* display the menu */
	printf( "? " );
	scanf( "%d", &choice );

	/* loop while user does not choose 3 */
	while ( choice != 3 ) {

		switch ( choice ) {
			case 1:
				printf( "Enter a character: " );
				scanf( "\n%c", &item );
				insert( &startPtr, item ); /* insert item in list */
				printList( startPtr );
				break;
			case 2: /* delete an element */
				/* if list is not empty */
				if ( !isEmpty( startPtr ) ) {
					printf( "Enter character to be deleted: " );
					scanf( "\n%c", &item );

				/* if character is found, remove it */
					if ( delete( &startPtr, item) ) { /* remove item */
						printf( "%c deleted.\n", item );
						printList( startPtr );
					} /* end if */
					else {
						printf ( "%c not found.\n\n", item );
					} /* end else */
				} /* end if */
			else {
				printf( "List is empty.\n\n" );
			} /* end else */

			break;
			default:
			printf( "Invalid choice.\n\n" );
			instructions();
			break:
		} /* end switch */

		printf( "? " );
		scanf( "%d", &choice );
	} /* end while */

	printf( "End of run.\n" );
	return 0;
} /* end main */

/* display program instructions to user */
void instructions( void )
{
	printf( "Enter your choice:\n"
	"   1 to insert an element into the list.\n"
	"   2 to delete an element from the list.\n"
	"   3 to end. \n" );
} /* end function instructions */

/* Insert a new value into the list in sorted order */
void insert( ListNodePtr *sPtr, char value )
{
	ListNodePtr newPtr; /* pointer to new node */
	ListNodePtr previousPtr; /* pointer to previous node in list */
	ListNodePtr currentPtr; /* pointer to current node in list */

	newPtr = malloc( sizeof( ListNode ) ); /* create node */

	if ( newPtr != NULL ) { /* is space available */
		newPtr->data = value; /* place value in node */
		newPtr->nextPtr = NULL; /* node does not link to another node */

		previousPtr = NULL;
		currentPtr = *sPtr;

		/* loop to find the correct location in the list */
		while ( currentPtr != NULL && value > currentPtr->data ) {
			p
