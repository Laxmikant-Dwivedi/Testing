#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node *next;
    };
    
    struct node *head,*newnode,*temp;
    head=0;
    int choice = 1;
    int count = 0;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the elements: ");
    scanf("%c",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next = newnode;
        temp=newnode;
    }
    printf("do you want to continue");
    scanf("%d",&choice);
}
temp=head;
while(temp!=0)
{
    printf("%c",temp->data);
    temp=temp->next;
    count++;
}
printf("  No Of Nodes In The Linklist is %d ",  count);
return 0;
}