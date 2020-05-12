#include<iostream>
#include<stdio.h>
using namespace std;
class Node
{
	public:
		Node()
		{
			left=right=NULL;
		}
	char data;
	Node *left,*right;	
};
class BinaryTree
{
	Node *root;
	public:
		BinaryTree()
		{
			root=NULL;
		}
	int built(Node *r,Node *p);
	int inorder(Node *r);
	int preorder(Node *r);	
	int postorder(Node *r);
	int levelorder();
	int height(Node *r);
	int size(Node *r);
	Node *getroot()
	{
		return root;
	}
};
int BinaryTree::built(Node *r,Node *p)
{
	if(r==NULL)
	{
		root=r=new Node();
		p=NULL;
	}
	if(p==NULL)
	cout<<"Enter the root Node";
	else if(r==p->left)
	cout<<"Enter left child of "<<p->data<<" ";
	else
	cout<<"Enter right child of "<<p->data<<" ";
	cin>>r->data;
	char ans;
	cout<<"Does "<<r->data<<" has left child(Y/N)";
	cin>>ans;
	if(ans=='Y'||ans=='y')
	{
		r->left==new Node();
		built(r->left,r);
	}
	cout<<"Does "<<r->data<<"has right child(Y/N) ";
	cin>>ans;
	if(ans=='Y'||ans=='y')
	{
		r->right==new Node();
		built(r->right,r);
	}
}
void BinaryTree :: inorder(Node r)
{
	if(r == NULL)
	return;
	if(r->left! = NULL)
	inorder(r->left);
	cout<<r->data<<" ";
	if(r->right! = NULL)
	inorder(r->right);
}
int main()
{
	BinaryTree t;
	t.built(t.getroot,NULL);
	t.inorder(t.getroot());
}
