/*
Code: BST to Sorted LL
Given a BST, convert it into a sorted linked list. Return the head of LL.
Input format :
Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Output Format :
Linked list elements (separated by space)
Sample Input :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
Sample Output :
2 5 6 7 8 10
*/
class bst{
    public:
    Node<int>* head;
    Node<int>* tail;
};
bst construct(BinaryTreeNode<int>* root){
    if(root==NULL){
        bst b;
        b.head=NULL;
        b.tail=NULL;
        return b;
    }
     Node<int>* rootdata = new Node<int>(root->data);
    bst left = construct(root->left);
    bst right = construct(root->right);
    bst ans;
    if(root->left!=NULL){
         left.tail->next=rootdata;
       //ootdata->next = right.head;
        ans.head=left.head;
       //ns.tail=right.tail;
    }
    else{
        ans.head=rootdata;
    }
    if(root->right!=NULL){
        rootdata->next=right.head;
        ans.tail=right.tail;
    }
    else{
    ans.tail=rootdata;
        rootdata->next=NULL;
    }
    return ans;
}
Node<int>* constructBST(BinaryTreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    return construct(root).head;
    
}
