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
void reverse(struct node** H, int m, int n)
{
    int d = n - m;
    int i;
    struct node* p, * q, * ptr = *H, * prv, * temp;

    for(i = 1, p = *H, q = *H ; i < m ; i++, p = p->next, q = q->next);

    i = 0;
    while(i <= (d/2))
    {
        int k;
        for(k = 0, prv = p ; k < (d-1) ; k++,prv = prv->next);
        for(k = 0, q = p ; k < d ; k++, q = q->next);
        temp = q->next;
        ptr->next = q;
        prv->next = p;
        q->next = p->next;
        p->next = temp;

        i++;
        p = q->next;
        d-=2;
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

    printf("\nThe original linked list is: ");
    display(head);
    
    int x,y;
    printf("\nEnter the range in the linked list you want to reverse: ");
    scanf("%d %d",&x,&y);

    reverse(&head,x,y);
    printf("\nThe desired linked list is: ");
    display(head);
    printf("\n");

    return 0;
}