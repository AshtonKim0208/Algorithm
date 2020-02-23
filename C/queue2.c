#include<stdio.h>
#include<string.h>

int main()
{
    int queue[10000];
    int front, rear, N, num;
    char cmd[6];

    front = 0;
    rear = 0;
    scanf("%d",&N);
    for(int i = 0; i < N; i++)
    {
        scanf("%s",&cmd);
        if(!strcmp(cmd, "push"))
        {
            scanf("%d",&num);
            queue[rear] = num;
            rear++;
        }
        else if(!strcmp(cmd, "pop"))
        {
            if(queue[front] == 0)
                printf("%d\n",-1);
            else
            {
                printf("%d\n",queue[front]);
                front++;
            }
        }
        else if(!strcmp(cmd, "front"))
        {
            if(front - rear == 0)
                printf("%d\n",-1);
            else
                printf("%d\n",queue[front]);
        }
        else if(!strcmp(cmd, "back"))
        {
            if(front - rear == 0)
                printf("%d\n",-1);
            else
                printf("%d\n",queue[rear-1]);
        }
        else if(!strcmp(cmd, "size"))
            printf("%d\n",rear-front);
        else if(!strcmp(cmd, "empty"))
        {
            if(rear - front == 0)
                printf("%d\n",1);
            else
                printf("%d\n",0);
        }
    }
    return 0;
}