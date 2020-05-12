/*
Swap two Node of LL
Given a linked list, i & j, swap the nodes that are present at i & j position in the LL. You need to swap the entire nodes, not just the data.
Indexing starts from 0. You don't need to print the elements, just swap and return the head of updated LL.
Assume i & j given will be within limits. And i can be greater than j also.
Input format :

Line 1 : Linked list elements (separated by space and terminated by -1)

Line 2 : i and j (separated by space)

Sample Input 1 :
3 4 5 2 6 1 9 -1
3 4
Sample Output 1 : 3 4 5 6 2 1 9
Sample Input 2 :
3 4 5 2 6 1 9 -1
2 4
Sample Output 2 :3 4 6 2 5 1 9
*/
node* swap_nodes(node *head,int i,int j)
{
  node *temp=head;
  node *prev1,*prev2,*current1,*current2,*rest;
  int count=0;
  int tp;
   if(i>j)
    {
      tp=i;
      i=j;
      j=tp;      
    }
    
  while(temp!=NULL)
  {   
   if(i==0 && j==1)
   {
      current2=head->next;
      rest=head->next->next;
      current2->next=head;
      head->next=rest;
      break;   
   }
    
   if(i==0 && count==j-1)
    {
        prev2=temp;
        current2=temp->next;
        rest=current2->next;
        current2->next=head->next;
        prev2->next=head;
        head->next=rest;
        break;
    }
    
  else if((j-i)==1 || (i-j)==1)
  {
    if(count==i-1)
    {
      prev1=temp;
      current1=temp->next;
      current2=temp->next->next;
      rest=current2->next;
      prev1->next=current2;
      current2->next=current1;
      current1->next=rest; 
    }
    
  }
    
  else if (j-i!=1)
  {
    if(count==i-1)
    {
      prev1=temp;
      current1=temp->next;
    }
    if(count==j-1)
    {
      prev2=temp;
      current2=temp->next;
      
      rest=current2->next;
      prev1->next=current2;
      current2->next=current1->next;
      prev2->next=current1;
      current1->next=rest;
      break;
     }
    
   }
    count++;
    temp=temp->next;
 }

 if(i==0)
   return current2;
 else
  return head;
   
}

