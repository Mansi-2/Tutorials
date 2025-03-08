#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=0,*tail=0,*temp,*newnode;
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
    newnode->prev=0;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    printf("\n");
}
void Insert_at_End()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->prev=tail;
    newnode->next=0;
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
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    printf("\n");
}
void Delete_from_Beginning()
{
    temp=head;
    head=head->next;
    head->prev=0;
    printf("Deleted Element is: %d\n\n",temp->data);
    free(temp);
}
void Delete_from_End()
{
    temp=tail;
    tail=tail->prev;
    tail->next=0;
    printf("Deleted Element is: %d\n\n",temp->data);
    free(temp);
}
void Delete_from_Position()
{
    Nodes();
    int i=1,pos;
    do
    {
        printf("Enter the Position: ");
        scanf("%d",&pos);
        if(pos<2||pos>count-1)
        {
            printf("\nInvalid Position\n\n");
        }
    }while(pos<2||pos>count-1);
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    printf("\nDeleted Element is: %d\n\n",temp->data);
    free(temp);
}
void Display_from_Head()
{
    printf("Linked List from Head to Tail: ");
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n\n");
}
void Display_from_Tail()
{
    printf("Linked List from Tail to Head: ");
    temp=tail;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n\n");
}
int main()
{
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0)
        {
            head=tail=newnode;
        }
        else
        {
            newnode->prev=tail;
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
        printf("Enter 7 to Display from Head\n");
        printf("Enter 8 to Display from Tail\n");
        printf("Enter 9 to Count Number of Nodes\n");
        printf("Enter 10 to Exit\n\n");
        printf("Enter the Operation: ");
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
            case 7: Display_from_Head();
                    break;
            case 8: Display_from_Tail();
                    break;
            case 9: Nodes();
                    printf("Number of Nodes is: %d\n\n",count);
                    break;
            case 10: printf("Program Finished");
                    break;
            default: printf("Enter a Valid Case\n\n");
        }
    }while(Operation!=10);
    return 0;
}


