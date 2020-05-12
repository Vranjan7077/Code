/*
Find a node in LL (recursive)
Given a linked list and an integer n you need to find and return index where n is present in the LL. Do this recursively.
Return -1 if n is not present in the LL.
Indexing of nodes starts from 0.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Line 2 : Integer n 
Output format :
Index
Sample Input 1 :
3 4 5 2 6 1 9 -1
5
Sample Output 1 : 2
Sample Input 2 :
3 4 5 2 6 1 9 -1
6
Sample Output 2 : 4
*/
int indexOfNRecursive(Node *head,int n)
{
		int res=0;
        int f=0;
        while(head!=NULL)
        {
            if(head->data==n)
            {
                f=1;
                return res;
            }
            else
            {
                res++;
                head = head->next;
            }
        }
    if(f==0)
        return -1;
}

