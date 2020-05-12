/*
Largest BST
Given a Binary tree, find the largest BST subtree. That is, you need to find the BST with maximum height in the given binary tree.
Return the height of largest BST.
Input format :

Line 1 : Elements in level order form (separated by space)

(If any node does not have left or right child, take -1 in its place)

Sample Input 1:
5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output 1:
2
*/
#include<climits>
int height(BinaryTreeNode<int>*root){
    if(root==NULL){
    return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return (1+max(left,right));
}
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
bool BST(BinaryTreeNode<int>*root){
    return isbst2(root).isbst;
}
int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return 0;
    }
    if(BST(root)){
     return height(root);
    }
    else{
        int leftlarge=largestBSTSubtree(root->left);
        int rightlarge=largestBSTSubtree(root->right);
    return max(leftlarge,rightlarge);
    }

}
