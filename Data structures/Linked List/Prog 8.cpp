/*
kReverse
Implement kReverse( int k ) in a linked list i.e. you need to reverse first K elements then reverse next k elements and join the linked list and so on.
Indexing starts from 0. If less than k elements left in the last, you need to reverse them as well. If k is greater than length of LL, reverse the complete LL.
You don't need to print the elements, just return the head of updated LL.
Input format :

Line 1 : Linked list elements (separated by space and terminated by -1)

Line 2 : k

Sample Input 1 :
1 2 3 4 5 6 7 8 9 10 -1
4
Sample Output 1 :
4 3 2 1 8 7 6 5 10 9
Sample Input 2 :
1 2 3 4 5 -1
2
Sample Output 2 : 2 1 4 3 5 
Sample Input 3 :
1 2 3 4 5 6 7 -1
3
Sample Output 3 : 3 2 1 6 5 4 7
*/
node* kReverse(node*head,int n)
{
  node* current = head;
  node* nx = NULL;
  node* prev = NULL;
  int count = 1;   
     
  while (current != NULL && count <= n)
  {
     nx  = current->next;
     current->next = prev;
     prev = current;
     current = nx;
     count++;
  }
     
  if (nx !=  NULL)
       head->next = kReverse(nx, n);    
  return prev;
}
