#include <stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(rear==N-1)
    {
        printf("\nQueue is Full\n");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue is Empty\n");
        front--,rear--;
    }
    else if(front==rear)
    {
        printf("Dequeued Element is: %d\n\n",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("Dequeued Element is: %d\n",queue[front]);
        front++;
    }
}void peek()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nFront Element is: %d",queue[front]);
    }
    printf("\n\n");
}
void display()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nQueue: ");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
    printf("\n\n");
}
void isEmpty()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nQueue is not Empty");
    }
    printf("\n\n");
}
void isFull()
{
    if(rear==N-1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        printf("\nQueue is not Full");
    }
    printf("\n\n");
}
int main()
{
    int choice,n,data;
    do
    {
        printf("Enter 1 to Enqueue\n");
        printf("Enter 2 to Dequeue\n");
        printf("Enter 3 to Peek\n");
        printf("Enter 4 to Display\n");
        printf("Enter 5 to Check Queue is Empty\n");
        printf("Enter 6 to Check Queue is Full\n");
        printf("Enter 7 to Exit\n\n");
        printf("Enter the Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter how much Elements You want to Enqueue: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        printf("Enter the Data: ");
                        scanf("%d",&data);
                        enqueue(data);
                    }
                    printf("\n");
                    break;
            case 2: printf("\nEnter how much Elements You want to Dequeue: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        dequeue();
                        if(front==-2&&rear==-2)
                        {
                            front++,rear++;
                            break;
                        }
                    }
                    printf("\n");
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            case 5: isEmpty();
                    break;
            case 6: isFull();
                    break;
            case 7: printf("\nProgram Finished");
                    break;
            default: printf("\nEnter a Valid Choice\n\n");
        }
    }while(choice!=7);
    return 0;
}


