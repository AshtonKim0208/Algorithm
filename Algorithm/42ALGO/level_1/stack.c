#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct  sNode
{
    char            *data;
    struct sNode    *next;
}               Node;

typedef struct  liststack
{
    Node            *peek;
    int             size;
}               slist;

void            createstack(slist **stack)
{
    *stack = (slist*)malloc(sizeof(slist));
    (*stack)->peek = NULL;
    (*stack)->size = 0;
}

Node            *createNode(char *data)
{
    Node            *newnode;
    char            *dest;

    dest = (char*)malloc(sizeof(strlen(data)));
    *newnode = (Node*)malloc(sizeof(Node));
    dest = strcpy(dest, data);
    (*newnode)->data = dest;
    (*newnode)->next = NULL;

    return (newnode);
}

void            deleteNode(Node *removeNode)
{
    free(removeNode->data);
    free(removeNode);
}

void            deleteStack(slist *stack)
{
    int             count;
    int             i;
    Node            *tempNode;

    i = 0;
    count = stack->size;
    while (i < count)
    {
        tempNode = pop(stack);
        deleteNode(tempNode);
        i++;
    }
    free(stack)
}
void            push(slist *stack, Node *newnode)
{
    //when stack is empty
    if (stack->size == 0)
    {
        stack->peek = newnode;
    }
    //when stack is not empty
    else
    {
        newnode->next = stack->peek;
        stack->peek = newnode;
    }
    stack->size++;
}

Node            *pop(slist *stack)
{
    Node            *tempNode;

    //when stack is empty
    if (stack->size = 0)
    {
        tempNode = NULL;
    }
    //when stack is not empty
    else
    {
        tempNode = stack->peek;
        stack->peek = stack->peek->next;
        stack->size--;
    }
    return (tempNode);
}

int             main(void)
{
    slist           *stack;

    createstack(&stack);
}