/*

*/
class bst{
    public:
    bool isbst;
    int min;
    int max;
};
bst isbst2(BinaryTreeNode<int> *root){
    if(root==NULL){
        bst b;
        b.isbst=true;
        b.min=INT_MAX;
        b.max=INT_MIN;
        return b;
    }
    bst leftmax=isbst2(root->left);
    bst rightmin=isbst2(root->right);
    int maximum = max(root->data,max(leftmax.max,rightmin.max));
    int minimum = min(root->data,min(leftmax.min,rightmin.min));
    bool torf = (leftmax.isbst)&&(rightmin.isbst)&&(root->data > leftmax.max)&&(root->data <= rightmin.min);
    bst  b;
    b.min=minimum;
    b.max=maximum;
    b.isbst = torf;
    return b;
}
bool isBST(BinaryTreeNode<int> *root){
       /* Don't write main().
	* Don't read input, it is passed as function argument.
	* Return output and don't print it.
	* Taking input and printing output is handled automatically.
	*/
return isbst2(root).isbst;
}
