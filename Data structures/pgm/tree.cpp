 
//...................................................................................................................
void inorder(struct binarytreenode *root)
{
	if(root)
	{
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);
	}
}
//non-recursive inorder traversal
void inorderNonRecursive(struct binarytreenode *root)
{
	struct stack *S=createstack();
	while(1)
	{
		while(root)
		{
			push(S,root);			
			root=root->left;	//got left subtree and keep on adding to stack		
		}
		if(isemptystack(S))
		break;
		root=pop(S);
		printf("%d",root->data);  //after popping,process the current node.
		root=root->right;   //indicates the completion of left subtree and current node , now go to right subtree
	}
	deletestack(S);
}
//...................................................................................................................
void preorder(struct binarytreenode *root)
{
	if(root)
	{
		printf("%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
//non-recursive preorder traversal
void preorderNonRecursive(struct binarytreenode *root)
{
	struct stack *S=createstack();
	while(1)
	{
		while(root)
		{
			printf("%d",root->data);//process the current node
			push(S,root);
			root=root->left;//if left subtree exists , add to stack
		}
		if(isemptystack(S))
		break;
		root=pop(S);
		root=root->right;//indicates the completion of left subtree and current node , now go to right subtree
	}
	deletestack(S);
}
//...................................................................................................................

void postorder(struct binarytreenode *root)
{
	if(root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d",root->data);
	}
}
//non-recursive postorder traversal
void postorderNonRecursive(struct binarytreenode *root)
{
	if(root)return;
	struct stack *S=createstack();
	push(S,root);
	struct binarytreenode *previous=NULL;
	while(!isemptystack(S))
	{
		struct binarytreenode *current =pop(S);
		if(!prev || previous->left==current || previous->right==curren)
		{
			if(current->left)
			push(S,current->left);
			else if (current->right)
			push(S,current->right);
		}
		else if (current->left==prev)
		{
			if(current->right)
			push(S,current->right);
		}
		else
		{
			priintf("%d",current->data);
			pop(S);
		}
		previous=current;
	}
}
//...................................................................................................................

void levelorder(struct binarytreenode *root)
{
	struct binarytreenode *temp;
	struct queue *Q=createqueue();
	if(!root)
	return;
	enqueue(Q,root);
	while(!isemptyqueue(Q))
	{
		temp=dequeue(Q);
		printf("%d",temp->data);
		if(temp->left)
		enqueue(Q,temp->left);
		if(temp->right)
		enqueue(Q,temp->right);
	}
	delete queue(Q);
}
//...................................................................................................................

