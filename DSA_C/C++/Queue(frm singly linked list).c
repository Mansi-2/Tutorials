#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=0,*rear=0,*temp,*newnode;
int choice,count;
void enqueue()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(front==0&&rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue()
{
    if(front==0&&rear==0)
    {
        printf("Queue is Empty\n");
    }
    else if(front==rear)
    {
        printf("Dequeued Element is: %d\n",front->data);
        temp=front;
        front=rear=0;
        free(temp);
    }
    else
    {   
        printf("Dequeued Element is: %d\n",front->data);
        temp=front;
        front=front->next;
        free(temp);
    }
}
void peek()
{
    if(front==0&&rear==0)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Front Element is: %d",front->data);
    }
    printf("\n\n");
}
void display()
{
    if(front==0&&rear==0)
    {
        printf("Queue is Empty");
    }
    else
    {
        temp=front;
        printf("Queue: ");
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    printf("\n\n");
}
void isEmpty()
{
    if(front==0&&rear==0)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Queue is not Empty");
    }
    printf("\n\n");
}
int main()
{
    int choice,n;
    do
    {
        printf("Enter 1 to Enqueue\n");
        printf("Enter 2 to Dequeue\n");
        printf("Enter 3 to Peek\n");
        printf("Enter 4 to Display\n");
        printf("Enter 5 to Check Queue is Empty\n");
        printf("Enter 6 to Exit\n\n");
        printf("Enter the Choice: ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
            case 1: printf("Enter how much Elements You want to Enqueue: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        enqueue();
                    }
                    printf("\n");
                    break;
            case 2: printf("Enter how much Elements You want to Dequeue: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        dequeue();
                        if(front==0&&rear==0)
                        {
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
            case 6: printf("Program Finished");
                    break;
            default: printf("Enter a Valid Case\n\n");
        }
    }while(choice!=6);
    return 0;
}


