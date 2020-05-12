#include<iostream>
#include "Node.cpp"
using namespace std;
node* takeinput_better()
{
	int data;
	cin>>data;
	node *head=NULL;
	node *tail=NULL;
	while(data!=-1)
	{
		node *newnode=new node(data);
		if(head==NULL)
		{
			head =newnode;
			tail=newnode;
		}
		else
		{
			tail->next=newnode;
			tail=tail->next;
			//or
			//tail=newnode;
		}
		cin>>data;
	}
	return head;
}

void print(node *head)
{
	node * temp = head;
	while(temp!= NULL)
	{
		cout<<temp->data<<" ";
		temp= temp->next;
		
	}
	while(head!= NULL)
	{
		cout<<head->data<<" ";
		head= head->next;
		
	}
}
int main()
{
	node *head=takeinput_better();
	print(head);
	
}
