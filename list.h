#include <stdio.h>
typedef struct sDlistnode
{
	struct sDlistnode *prev;
	struct sDlistnode *next;
	int data;
}Dlistnode;


typedef struct sDlisthead
{
	Dlistnode *head;
	Dlistnode *trail;
	int size;
}Dlisthead;
