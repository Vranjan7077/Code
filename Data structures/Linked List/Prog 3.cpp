/*
Palindrome LinkedList
Check if a given linked list is palindrome or not. Return true or false.
Indexing starts from 0.
Input format : Linked list elements (separated by space and terminated by -1)`
Sample Input 1 : 9 2 3 3 2 9 -1
Sample Output 1 : true
Sample Input 2 : 0 2 3 2 5 -1
Sample Output 2 : false
*/
bool check_palindrome(node* head)
{

    int count=0;
    node *ptr, *nptr;
    ptr=head;
    while(ptr!=NULL)
    {

        count++;
        ptr=ptr->next;
    }
    ptr=head;
    int arr[count],count1=0;
    while(ptr!=NULL)
    {
       // cout<<ptr->data;
        arr[count1]=ptr->data;
        count1++;
        ptr=ptr->next;
    }
    ptr=head;
 while(ptr!=NULL)
    {
        if(ptr->data!=arr[count-1])
        return false;
        ptr=ptr->next;
        count--;
        if(count==-1)
        return true;
    }
}
