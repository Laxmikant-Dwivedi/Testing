#include <bits/stdc++.h>
using namespace std;
/* Node structure of a doubly linked list node */
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
};

void add_at_begin(Node** head, int x)
{
 
    Node* new_node = new Node();
    new_node->data = x;
 
    new_node->prev = NULL;
 
    new_node->next = (*head);
    
    if ((*head) != NULL)
        (*head)->prev = new_node;
 
    (*head) = new_node;
}
void print_list(Node* node)
{
    while (node != NULL)
    {
        cout << node->data << ",";
        node = node->next;
    }
    cout<<endl;
}
void reverse_list(Node **head)
{
    Node *temp = NULL;
    Node *current = *head;
    
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;            
        current = current->prev;
    }
     
    if(temp != NULL )
        *head = temp->prev;
}
 
int main()
{
    Node* head = NULL;
 
    add_at_begin(&head, 17);
    add_at_begin(&head, 13);
    add_at_begin(&head, 1);
    add_at_begin(&head, 7);
    add_at_begin(&head, 2);
 
    cout<<"Initial linked list before reversing: "<<endl;
    print_list(head);
    reverse_list(&head);
    
    cout<<"Resultant reversed linked list: "<<endl;
    print_list(head);
 
    return 0;
}