/* Fig. 12.19: fig12_19.c
 * Creat a binary tree and traverse it 
 * preorder, inorder, and postorder */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* self-referential structure */
struct treeNode {
	struct treeNode *leftPtr; /* pointer to left subtree */
	int data; /* node value */
	struct treeNode *rightPtr; /* pointer to right subtree */
}; /* end structure treeNode */

typedef struct treeNode TreeNode; /* synonym for struct treeNode */
typedef TreeNode *TreeNodePtr; /* synoym for Treenode */

/* prototypes */
void insertNode( TreeNodePtr *treePtr, int value );
void inOrder( TreeNodePtr treePtr );
void preOrder( TreeNodePtr treePtr );
void postOrder( TreeNodePtr treePtr );

/* function main begins program execution */
int main ( void )
{
	int i; /* counter to loop from 1-10 */
	int item; /* variable to hold random values */
	TreeNodePtr rootPtr = NULL; /* tree initially empty */

	srand( time( NULL ) );
	printf( "The numbers being place in the tree are:\n" );

	/* insert random values between 0 and 14 in the tree */
	for ( i = 1; i <= 10; i++ ) {
		item  = rand() % 15;
		printf( "%3d", item );
		insertNode( &rootPtr, item );
	} /* end fr */

	/* traverse the tree preOrder */
	printf( "\n\nThe preOrder traversal is:\n" );
	preOrder( rootPtr );

	/* traverse the tree inOrder */
	printf( "\n\nThe inOrder traversal is:\n" );
	inOrder( rootPtr );

	/* traverse the tree postOrder */
	printf( "\n\nThe postorder traversal is:\n" );
	postOrder( rootPtr );
	return 0;
} /* end main */

/* insert node into tree */
void insertNode( TreeNodePtr *treePtr, int value )
{
	/* if tree is empty */
	if ( *treePtr == NULL ) {
		*treePtr = malloc( sizeof( TreeNode ) );

		/* if memory was allocated then assign data */
		if 	( *treePtr != NULL ) {
			( *treePtr )->data = value;
			( *treePtr )->leftPtr = NULL;
			( *treePtr )->rightPtr = NULL;
		} /* end if */
		else {
			printf( "%d not inserted. No memory available.\n", value );
		} /* end else */
	} /* end if */
	else { /* tree is not empty */
		/* data to insert is less than data in current node */
		if ( value < ( *treePtr )->data ) {
			insertNode( &( ( *treePtr )->leftPtr ), value );
		} /* end if */

		/* data to insert tis greater than data in current node */
		else if ( value > ( *treePtr )->data ) {
			insertNode( &( ( *treePtr )->rightPtr ), value );
		} /* end else if  */
		else { /* duplicate data value ignored */
			printf( "dup" );
		} /* end else */
	} /* end else */
} /* end function insertNode */

/* beign indorder traversal of tree */
void inOrder( TreeNodePtr treePtr )
{ 
	/* if tree is not empty then traverse */
	if ( treePtr != NULL ) {
		inOrder( treePtr->leftPtr );
		printf( "%3d", treePtr->data );
		inOrder( treePtr->rightPtr );
	} /* end if */
} /* end function inOrder */

/* begin preorder traversal of tree */
void preOrder( TreeNodePtr treePtr )
{
	/* if tree is not empty then traverse */
	if ( treePtr != NULL ) {
		printf( "%3d", treePtr->data );
		preOrder( treePtr->leftPtr );
		preOrder( treePtr->rightPtr );
	} /* end if */
} /* end function preOrder */

/* begin postorder traversal of tree */
void postOrder( TreeNodePtr treePtr )
{
	/* if tree is not empty then traverse */
	if ( treePtr != NULL ) {
		postOrder( treePtr->leftPtr );
		postOrder( treePtr->rightPtr );
		printf( "%3d", treePtr->data );
	} /* end if */
} /* end function postOrder */
