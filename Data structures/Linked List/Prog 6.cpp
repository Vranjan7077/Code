/*
Even after Odd LinkedList
Arrange elements in a given Linked List such that, all even numbers are placed after odd numbers. Respective order of elements should remain same.
You don't need to print the elements, instead return the head of updated LL.
Input format : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 : 1 4 5 2 -1
Sample Output 1 : 1 5 4 2 
Sample Input 2 : 1 11 3 6 8 0 9 -1
Sample Output 2 : 1 11 3 9 6 8 0
*/

// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/
node* arrange_LinkedList(node* head)
{
    node *temp=head;;
    node *h1=NULL;
    node *h2=NULL;
    node *t1=NULL;
    node *t2=NULL;
    int count1=0;
    int count2=0;
  
  while(temp!=NULL)
  {
    if(temp->data %2 !=0 && h1==NULL)
    {
      h1=temp;
      t1=temp;
      temp=temp->next;
      count1++;
    }
    if(temp->data %2 ==0 && h2==NULL)
    {
      h2=temp;
      t2=temp;
      temp=temp->next;
      count2++;
    }
    else if(temp->data %2 !=0)
    {
      t1->next=temp;
      t1=temp;
      temp=temp->next;
      count1++;
    }
    else if(temp->data %2 ==0)
    {
      t2->next=temp;
      t2=temp;
      temp=temp->next;
      count2++;
    }     
  }
  if(count1==1 || count2==1)
    return head ;
  if(count2==0)
    return h1;
  if(count1==0)
    return h2;
  else
  {
    t2->next=NULL;
    t1->next=h2;
    return h1;
  }
    
}  
