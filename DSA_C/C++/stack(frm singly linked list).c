#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=0,*temp,*newnode;
int choice,count;
void push()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;
}
void pop()
{
    if(top==0)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Popped Element is: %d\n",top->data);
        temp=top;
        top=top->next;
        free(temp);
    }
}
void peek()
{
    if(top==0)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Top Element is: %d",top->data);
    }
    printf("\n\n");
}
void display()
{
    if(top==0)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Stack: ");
        temp=top;
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
    if(top==0)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Stack is not Empty");
    }
    printf("\n\n");
}
int main()
{
    int Operation,n,data;
    do
    {
        printf("Enter 1 to Push\n");
        printf("Enter 2 to Pop\n");
        printf("Enter 3 to Peek\n");
        printf("Enter 4 to Display\n");
        printf("Enter 5 to Check Stack is Empty\n");
        printf("Enter 6 to Exit\n\n");
        printf("Enter the Operation: ");
        scanf("%d",&Operation);
        printf("\n");
        switch(Operation)
        {
            case 1: printf("Enter how much Elements You want to Push: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        push();
                    }
                    printf("\n");
                    break;
            case 2: printf("Enter how much Elements You want to Pop: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        pop();
                        if(top==0)
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
    }while(Operation!=6);
    return 0;
}


