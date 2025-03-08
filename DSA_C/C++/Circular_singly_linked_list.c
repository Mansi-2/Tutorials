#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *tail=0,*temp,*newnode;
int choice,count;
void Nodes()
{
    count=0;
    temp=tail->next;
    do
    {
        temp=temp->next;
        count++;
    }while(temp!=tail->next);
}
void Insert_at_Beginning()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=tail->next;
    tail->next=newnode;
    printf("\n");
}
void Insert_at_End()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=tail->next;
    tail->next=newnode;
    tail=newnode;
    printf("\n");
}
void Insert_at_Position()
{
    Nodes();
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    printf("\n");
    int i=1,pos;
    do
    {
        printf("Enter the Position: ");
        scanf("%d",&pos);
        if(pos<1||pos>count)
        {
            printf("\nInvalid Position\n\n");
        }
    }while(pos<1||pos>count);
    temp=tail->next;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    printf("\n");
}
void Delete_from_Beginning()
{
    temp=tail->next;
    tail->next=tail->next->next;
    printf("Deleted Element is: %d\n\n",temp->data);
    free(temp);
}
void Delete_from_End()
{
    temp=tail->next;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    tail=temp;
    temp=temp->next;
    tail->next=temp->next;
    printf("Deleted Element is: %d\n\n",temp->data);
    free(temp);
}
void Delete_from_Position()
{
    Nodes();
    struct node *prevnode=0;
    int i=1,pos;
    do
    {
        printf("Enter the Position: ");
        scanf("%d",&pos);
        if(pos<1||pos>count-1)
        {
            printf("\nInvalid Position\n\n");
        }
    }while(pos<1||pos>count-1);
    temp=tail->next;
    while(i<pos)
    {
        prevnode=temp;
        temp=temp->next;
        i++;
    }
    prevnode->next=temp->next;
    printf("\nDeleted Element is: %d\n\n",temp->data);
    free(temp);
}
void Display()
{
    printf("Linked List: ");
    temp=tail->next;
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=tail->next);
    printf("\n\n");
}
void Check_Circular()
{
    printf("Front Element by Tail: %d\n\n",tail->next->data);
}
int main()
{
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(tail==0)
        {
            tail=temp=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice!=0);
    int Operation;
    do
    {
        printf("Enter 1 to Insert at Beginning\n");
        printf("Enter 2 to Insert at End\n");
        printf("Enter 3 to Insert at Position\n");
        printf("Enter 4 to Delete from Beginning\n");
        printf("Enter 5 to Delete from End\n");
        printf("Enter 6 to Delete from Position\n");
        printf("Enter 7 to Display\n");
        printf("Enter 8 to Count Number of Nodes\n");
        printf("Enter 9 to Check if the List is Circular or not\n");
        printf("Enter 10 to Exit\n\n");
        printf("Enter the Choice: ");
        scanf("%d",&Operation);
        printf("\n");
        switch(Operation)
        {
            case 1: Insert_at_Beginning();
                    break;
            case 2: Insert_at_End();
                    break;
            case 3: Insert_at_Position();
                    break;
            case 4: Delete_from_Beginning();
                    break;
            case 5: Delete_from_End();
                    break;
            case 6: Delete_from_Position();
                    break;
            case 7: Display();
                    break;
            case 8: Nodes();
                    printf("Number of Nodes is: %d\n\n",count);
                    break;
            case 9: Check_Circular();
                    break;
            case 10: printf("Program Finished");
                     break;
            default: printf("Enter a Valid Case\n\n");
        }
    }while(Operation!=10);
    return 0;
}


