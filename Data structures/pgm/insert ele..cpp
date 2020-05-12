//insert an element in binary search tree...
void insert(struct BSTNode *root,int data)
{
	struct BSTNode *par;
	struct BSTNode *n=malloc(sizeof(struct BSTNode));
	n->left=NULL;
	n->data=data;
	n->right=NULL;
	if(root==NULL)
	return=n;
    else
    {
	    par=root;
	    while(par!=NULL)
	    {
		    if(par->data>data)
		    {
			    if(par->left==NULL)
			    par->left=n;
		    }
		    else if(par->data<data)
		    {
			    if(par->right==NULL)
			    par->right=n;
			    par=par->right;
		    }
	    }//end of while
    }//end of else
}
//delete in binary search tree
struct BSTNode *Delete (struct BSTNode *root,int data)
{
	struct BSTNode *temp;
	if(root==Null)
	printf("No such element exists");
	else if(data<root->data)
	root->left=Delete(root->left,data);
	else if(data>root->data)
	root->right=Delete(root->right,data);
	else
	{//element found
	    if(root->left&&root->right)
	    {
		    temp=Findmax(root->left);
		    root->data=temp->data;
		    root->left=Delete(root->left,root)
	    }
	    else
	    {
	    	temp=root;
	    	if(root->left==NULL)
		    root=root->right;
		    if(root->right==NULL)
		    root=root->left;
		    free(temp);
	    }
	}//end of else
	return(root);
}




