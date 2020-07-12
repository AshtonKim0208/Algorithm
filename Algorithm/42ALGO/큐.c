#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct qNode
{
    char *Data;
    struct qNode* Next;
}Node;

typedef struct ListQueue
{
    Node *Front;
    Node *Rear;
    int size;
};

void createQueue(ListQueue *Queue)
{
    (*Queue) = (ListQueue*)malloc(sizeof(ListQueue));
    (*Queue)->Front = NULL;
    (*Queue)->Rear = NULL;
    (*Queue)->size = 0;
}

Node *createNode(char *Data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newnode->Data = (char*)malloc(strlen(Data) + 1);
    newnode->Next = NULL;

    return (newnode);
}

void deleteNode(Node *removeNode)
{
    free(removeNode->Data);
    free(removeNode);
}

Node *Peek(ListQueue *Queue)
{
    return (Queue->Front);
}

void    push(ListQueue *Queue, Node *newnode)
{
    if (Queue->size == 0)
    {
        Queue->Front = newnode;
        Queue->Rear = newnode;
    }
    else
    {
        Queue->Rear->next->newnode;
        Queue->rRear = newnode;
    }
    Queue->size++;
}

Node    *pop(ListQueue *Queue)
{
    Node *tempNode = Queue->Front;
    if (Queue->size == 0)
    {
        printf("\nWrong Command");
        return NULL;
    }
    else if (Queue->size == 1)
    {
        Queue->Front = NULL;
        Queue->Rear = NULL;
        Queue->size--;
    }
    else
    {
        Queue->Front = Queue->Front->Next;
        Queue->size--;
    }
    return (tempNode);
}

void    deleteQueue(ListQueue *Queue)
{
    int count = Queue->size;

    while(count-- != 0)
    {
        Node* temp = pop(Queue);
        printf("\n pop node data %s\n", temp->Data);
        deleteNode(temp);
    }
    free(Queue);
}

int main(void)
{
    int i;
    ListQueue* Queue;

    createQueue(&Queue);
    Enqueue(Queue, createNode("a"));
    Enqueue(Queue, createNode("b"));
    Enqueue(Queue, createNode("c"));
    Enqueue(Queue, createNode("d"));
    
    Node *temp1 = Peek(Queue);

    printf("\n--Current Queue--[size%d]\n\n", Queue->size);
    printf("\n--front is : [%s]\n\n", Queue->Front->Data);
    printf("rear is : [%s]\n\n", Queue->Rear->Data);

    Node *horse = Queue->Front;
}