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
        cur->next = NULL;
        cur->data = rand()%100;

        if(*H == NULL)
            *H = ptr = cur;
        else
        {
            ptr->next = cur;
            ptr = cur;
        }
    }
}
void delete(struct node** H)
{
    struct node* p = *H, * q;

    while(p != NULL)
    {
        q = p->next;
        free(p);
        p = q;
    }
    *H = NULL;
}
void display(struct node* H)
{
    struct node* ptr = H; 

    if(ptr == NULL)
       printf("\nThe linked list is deleted\n");
    else
    {
        printf("\nThe linked list is: ");

        while(ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int n;
    struct node* head = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    create(&head,n);

    display(head);
    printf("\n");

    delete(&head);
    display(head);

    return 0;
}