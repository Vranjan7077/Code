/*
Code: Midpoint of LL
Given a linked list, find and return the midpoint.
If the length of linked list is even, return the first mid point.
Input format : Linked list elements (separated by space and terminated by -1)`
Sample Input 1 : 1 2 3 4 5 -1
Sample Output 1 : 3
Sample Input 2 : 1 2 3 4 -1
Sample Output 2 : 2
*/
node* midpoint_linkedlist(node *head)
{
    if (!head)
    {
        return head;
    }

    node* p1 = head, * p2 = head->next;
    while (p2 && p2->next)
    {
        p1 = p1->next;
        p2 = p2->next->next;
    }
    return p1;
}

/*  OR
#include<iostream>
using namespace std; 
struct Node
{
    int data;
    struct Node* next;
};
void printMiddle(struct Node *head)
{
    struct Node *slow_ptr = head;
    struct Node *fast_ptr = head;
 
    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        cout<<slow_ptr->data;
    }
}
 
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
void printList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
}
 
/* Drier program to test above function*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
    int i;
    for (i=5; i>0; i--)
    {
        push(&head, i);
        printList(head);
        printMiddle(head);
    }
    return 0;
}
*/
