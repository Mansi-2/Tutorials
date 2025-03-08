#include <stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(int x)
{
    if(top==N-1)
    {
        printf("\nStack Overflow\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
        top--;
    }
    else
    {
        printf("Popped Element is %d\n",stack[top]);
        top--;
        if(top==-1)
        {
            printf("\n");
        }
    }
}
void peek()
{
    if(top==-1)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        printf("\nTop Element is %d\n",stack[top]);
    }
}
void display()
{
    if(top==-1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        printf("\nStack: ");
        for(int i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
    }
    printf("\n\n");
}
void isEmpty()
{
    if(top==-1)
    {
        printf("\nStack is Empty\n");
    }
    else
    {
        printf("\nStack is not Empty\n");
    }
}
void isFull()
{
    if(top==N-1)
    {
        printf("\nStack is Full\n");
    }
    else
    {
        printf("\nStack is not Full\n");
    }
}
int main()
{
    int choice,n,data;
    do
    {
        printf("Enter 1 to Push\n");
        printf("Enter 2 to Pop\n");
        printf("Enter 3 to Peek\n");
        printf("Enter 4 to Display\n");
        printf("Enter 5 to Check Stack is Empty\n");
        printf("Enter 6 to Check Stack is Full\n");
        printf("Enter 7 to Exit\n\n");
        printf("Enter the Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter how much Elements You want to Push in the Stack: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        printf("Enter the Data: ");
                        scanf("%d",&data);
                        push(data);
                    }
                    printf("\n");
                    break;
            case 2: printf("\nEnter how much Elements You want to Pop from the Stack: ");
                    scanf("%d",&n);
                    printf("\n");
                    for(int i=1;i<=n;i++)
                    {
                        pop();
                        if(top==-2)
                        {
                            top++;
                            break;
                        }
                    }
                    printf("\n");
                    break;
            case 3: peek();
                    printf("\n");
                    break;
            case 4: display();
                    break;
            case 5: isEmpty();
                    printf("\n");
                    break;
            case 6: isFull();
                    printf("\n");
                    break;
            case 7: printf("\nProgram Stopped");
                    break;
            default: printf("Enter a Valid Case");
        }
    }while(choice!=7);
    return 0;
}


