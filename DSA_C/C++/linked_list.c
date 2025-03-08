#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=0,*temp,*newnode;
int choice,count;
void Nodes()
{
    count=0;
    temp=head;
    while(temp!=0)
    {
        temp=temp->next;
        count++;
    }
}
void Insert_at_Beginning()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    printf("\n");
}
void Insert_at_End()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    printf("\n");
}
void Insert_at_Position()
{
    Nodes();
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    int i=1,pos;
    do
    {
        printf("\nEnter the Position: ");
        scanf("%d",&pos);
        if(pos<1||pos>count)
        {
            printf("\nInvalid Position\n");
        }
    }while(pos<1||pos>count);
    temp=head;
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
    temp=head;
    head=head->next;
    printf("Deleted Element is: %d",temp->data);
    free(temp);
    printf("\n\n");
}
void Delete_from_End()
{ 
    struct node *prevnode=0;
    temp=head;
    while(temp->next!=0)
    {
        prevnode=temp;
        temp=temp->next;
    }
    prevnode->next=0;
    printf("Deleted Element is: %d",temp->data);
    free(temp);
    printf("\n\n");
}
void Delete_from_Position()
{
    struct node *prevnode=0;
    Nodes();
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
    temp=head;
    while(i<pos)
    {
        prevnode=temp;
        temp=temp->next;
        i++;
    }
    prevnode->next=temp->next;
    printf("\nDeleted Element is: %d",temp->data);
    free(temp);
    printf("\n\n");
}
void display()
{
    printf("Linked List: ");
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n\n");
}
int main()
{
    int Operation;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("\nDo You want to Continue? (0,1): ");
        scanf("%d",&choice);
        printf("\n");
    }while(choice!=0);
    do
    {
        printf("Enter 1 to Insert at Beginning\n");
        printf("Enter 2 to Insert at End\n");
        printf("Enter 3 to Insert at Position\n");
        printf("Enter 4 to Delete from Beginning\n");
        printf("Enter 5 to Delete from End\n");
        printf("Enter 6 to Delete from Position\n");
        printf("Enter 7 to Display\n");
        printf("Enter 8 to Count the Number of Nodes\n");
        printf("Enter 9 to Exit\n\n");
        printf("Enter the Operation You want to Perform: ");
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
            case 7: display();
                    break;
            case 8: Nodes();
                    printf("Number of Nodes is: %d\n\n",count);
                    break;
            case 9: printf("Program Finished"); 
                    break;
            default: printf("Enter a Valid Choice\n\n");
        }
    }while(Operation!=9);
    return 0;
}   

