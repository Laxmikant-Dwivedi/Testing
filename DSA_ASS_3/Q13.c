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
        cur->data = rand()%100;
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
void display(struct node* H)
{
    struct node* ptr = H;

    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
void evenodd(struct node** H)
{
    struct node* p, * q;
    p = *H;

    while(p->next != NULL)
    {
        q = p->next;
        while(q != NULL)
        {
            if((p->data % 2 == 0) && (q->data % 2 != 0))
            {
                int t = p->data;
                p->data = q->data;
                q->data = t;
            }
            q = q->next;
        }
        p = p->next;
    }
}
int main()
{
    int n;
    struct node* head = NULL;
    printf("Enter number of nodes: ");
    scanf("%d",&n);

    create(&head,n);
    printf("The linked list is: ");
    display(head);
    printf("\n");
    printf("The linked list after segregating odd and even elements is: ");
    evenodd(&head);
    display(head);
    printf("\n");

    return 0;
}
