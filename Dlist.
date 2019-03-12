#include  "./标头.h"
#include<stdio.h>
#include <stdbool.h>
#include<malloc.h>
#include"stdlib.h"

void init(Dlisthead *dlist)
{
	dlist->head = NULL;
	dlist->trail = NULL;
	dlist->size = 0;
}

int dlist_insert_head(Dlisthead *dlist, Dlistnode *node, int data)
{
	if (node == NULL)		//当只传递一个数据时
	{
		node = (Dlistnode *)malloc(sizeof(Dlistnode));		//新建节点，为节点分配空间
		if (node == NULL)
		{
			return -1;
		}
	}
	node->data = data;
	node->prev = NULL;
	node->next = NULL;
	if (dlist->size == 0)
		dlist->head = node;
	else
	{
		node->next = dlist->head;
		dlist->head->prev = node;
		dlist->head = node;
	}
	dlist->size++;
	return 0;

}

void dlist_dump(Dlisthead *dlist) 
{
	int i = 0;
	Dlistnode *node = dlist->head;
	while (i < dlist->size) 
	{
		printf("%d\n", node->data);
		node = node->next;
		i++;
	}
}
int main()
{
	Dlisthead dlist = {0};
	Dlistnode *node = NULL;
	dlist_insert_head(&dlist, NULL, 1);
	dlist_insert_head(&dlist, NULL, 2);
	dlist_dump(&dlist);
	system("pause");
	return 0;
}
