/*
Delete every N nodes
Given a linked list and two integers M and N. Traverse the linked list such that you retain M nodes then delete next N nodes, continue the same until end of the linked list. That is, in the given linked list you need to delete N nodes after every M nodes.
Input format :

Line 1 : Linked list elements (separated by space and terminated by -1)

Line 2 : M

Line 3 : N

Sample Input 1 :
1 2 3 4 5 6 7 8 -1
2
2
Sample Output 1 : 1 2 5 6
Sample Input 2 :
1 2 3 4 5 6 7 8 -1
2
3
Sample Output 2 : 1 2 6 7
*/
#include<iostream>
using namespace std;
struct Node
{
		int data;
		Node *next;
};

Node *skipMdeleteN(Node *head,int m,int n)
{
		Node *temphead=head;
		while(1)
		{
				for(int i=0;i<m-1;i++)
				{
						if(head==NULL)
								break;
						head=head->next;
				}
				if(head==NULL)
						break;
				Node *temp=head->next;
				for(int i=0;i<n-1;i++)
				{
						if(temp==NULL)
								break;
						temp=temp->next;
				}
				if(temp==NULL)
				{
						head->next=NULL;
						break;
				}
				head->next=temp->next;
				head=temp->next;
		}
		return temphead;
}
int main()
{
		Node *head=new Node;
		Node *temp=head;
		int data;
		cin>>data;
		head->data=data;
		while(1)
		{
				cin>>data;
				if(data==-1)
						break;
				temp->next=new Node;
				temp=temp->next;
				temp->data=data;
		}
		int m,n;
		cin>>m>>n;
		head=skipMdeleteN(head,m,n);
		temp=head;
		while(temp!=NULL)
		{
				cout<<temp->data<<" ";
				temp=temp->next;
		}
}
