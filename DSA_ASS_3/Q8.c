#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void create(struct node** H, int x)
{
    struct node* cur, * ptr;

    for(int i = 0 ; i < x ; i++)
    {
        cur = malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&cur->data);
        cur->next = NULL;

        if(*H == NULL)
            *H = ptr = cur;
        else
        {
            ptr->next = cur;
            ptr = cur;
        }
    }
}
void RemoveRepeated(struct node** H)
{
    struct node* ptr = *H, * q;
    
    while (ptr != NULL)
    {
        q = ptr->next;          
        while(q != NULL)
        {
            if(ptr->data == q->data)
            {
                ptr->next = q->next;
                free(q);
                q = ptr->next;
            }
            else
                q = q->next;
        }
        ptr = ptr->next;
    }
}
void display(struct node* H)
{
    struct node* ptr = H;

    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    int n;
    struct node* head = NULL;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    create(&head,n);
    
    printf("\nThe linked list is: ");
    display(head);

    printf("\nThe linked list after removing the repeated elements is: ");
    RemoveRepeated(&head);
    display(head);
    printf("\n");

    return 0;
}