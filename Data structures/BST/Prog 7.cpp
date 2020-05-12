/*
Code: BST Class
Implement the BST class which includes following functions -
1. search
Given an element, find if that is present in BSt or not. Return true or false.
2. insert -
Given an element, insert that element in the BST at the correct position. Assume unique elements will be given.
3. delete -
Given an element, remove that element from the BST. If the element which is to be deleted has both children, replace that with the minimum element from right sub-tree.
4. printTree (recursive) -
Print the BST in ithe following format -
For printing a node with data N, you need to follow the exact format -
N:L:x,R:y
wherer, N is data of any node present in the binary tree. x and y are the values of left and right child of node N. Print the children only if it is not null.
There is no space in between.
You need to print all nodes in the recursive format in different lines.
Note : main function is given for your reference which we are using internally to test the class.
*/
class BST {
	BinaryTreeNode<int>* root;
    private:
    bool hasdata(BinaryTreeNode<int>* root,int data){
        if(root==NULL){
            return false;
        }
        if(root->data==data){
            return true;
        }
        if(root->data > data){
            return hasdata(root->left,data);
        }
        else if(root->data  < data){
             return hasdata(root->right,data);
        }
}

    BinaryTreeNode<int>* insert(BinaryTreeNode<int>* root,int data){
        if(root==NULL){
            BinaryTreeNode<int>* newnode=new BinaryTreeNode<int>(data);
            return newnode;
        }
        else{
            if(root->data>data){
            root->left=insert(root->left,data);
            }
            else if(root->data<data){
            root->right=insert(root->right,data);
            }
        }
        return root;
    }        
    BinaryTreeNode<int>* deleteData(BinaryTreeNode<int>* root,int data){
        if(root==NULL){
            return NULL;        
        }
        if(root->data > data){
           root->left =  deleteData(root->left,data);
        }
        else if(root->data < data){
           root->right = deleteData(root->right,data); 
        }
        else {
            if(root->data==data){
                if(root->right==NULL){
                    BinaryTreeNode<int>* temp=root->left;
                    root->left=NULL;
                    delete root;
                    return temp;
                }
                else if(root->left==NULL){
                    BinaryTreeNode<int>* temp=root->right;
                    root->right=NULL;
                    delete root;
                    return temp;
                }
                else if(root->left==NULL && root->right==NULL){
                    delete root;
                    return NULL;
                }
                else {
                    BinaryTreeNode<int>* min = root->right;
                    while(min->left!=NULL){
                        min=min->left;
                    }
                    int MIN=min->data;
                    root->data=MIN;
                    root->right=deleteData(root->right,MIN);
                    return root;
                }
            }
        }
    }
void printTree(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<':';
    if(root->left!=NULL){
        cout<<'L'<<':'<<root->left->data<<',';
    }
    if(root->right!=NULL){
        cout<<'R'<<':'<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}
   public:
    BST(){
        root=NULL;
    }
    bool hasData(int data){
        return hasdata(root,data);
    }
    void insert(int data){
        this->root=insert(this->root,data);
    }
    void deleteData(int data){
        this->root = deleteData(this->root,data);
    } 
    void printTree(){
        printTree(this->root);
    }
    
    
};
