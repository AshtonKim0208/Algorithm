#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct  qNode
{
	char* Data;
	struct qNode* next;
}               Node;

typedef struct  listqueue
{
	Node* front;
	Node* rear;
	int             size;
}               nlist;

void            create_queue(nlist** queue)
{
	*queue = (nlist*)malloc(sizeof(nlist));
	(*queue)->front = NULL;
	(*queue)->rear = NULL;
	(*queue)->size = 0;
}

Node* create_node(char* data)
{
	Node* newnode;
	newnode = (Node*)malloc(sizeof(Node));
	char* dst = (char*)malloc(strlen(data));
	strcpy(dst, data);
	newnode->Data = dst;
	newnode->next = NULL;
	return (newnode);
}

void            push(nlist** queue, Node* newnode)
{
	if ((*queue)->size == 0)
	{
		(*queue)->front = newnode;
		(*queue)->rear = newnode;
	}
	else
	{
		(*queue)->rear->next = newnode;
		(*queue)->rear = newnode;
	}
	(*queue)->size++;
}

Node* pop(nlist* queue)
{
	Node* tempNode;
	tempNode = queue->front;
	if (queue->size == 0)
		return NULL;
	else if (queue->size == 1)
	{
		queue->front = NULL;
		queue->rear = NULL;
		queue->size--;
	}
	else
	{
		queue->front = queue->front->next;
		queue->size--;
	}
	return (tempNode);
}
int main(void)
{
	nlist* queue;
	int     num;
	int     idx;
	char    command[100], var[100];
	create_queue(&queue);
	scanf("%d", &num);
	idx = 1;
	while (idx <= num)
	{
		scanf("%s", command);
		if (!strcmp(command, "push")) {
			scanf("%s", var);
			push(&queue, create_node(var));
		}
		if (!strcmp(command, "pop")) {
			if (queue->size == 0)
				printf("%d\n", -1);
			else printf("%s\n", pop(queue)->Data);
		}
		if (!strcmp(command, "size"))
			printf("%d\n", queue->size);
		if (!strcmp(command, "empty"))
		{
			if (queue->size == 0)
				printf("%d\n", 1);
			else printf("%d\n", 0);
		}
		if (!strcmp(command, "front"))
		{
			if (queue->size == 0)
				printf("%d\n", -1);
			else printf("%s\n", queue->front->Data);
		}
		if (!strcmp(command, "back"))
		{
			if (queue->size == 0)
				printf("%d\n", -1);
			else printf("%s\n", queue->rear->Data);
		}
		idx++;
	}
	return (0);
}