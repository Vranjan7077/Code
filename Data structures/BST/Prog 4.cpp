/*
Code: Construct BST from a Sorted Array
Given a sorted integer array A of size n which contains all unique elements. You need to construct a balanced BST from this input array. Return the root of constructed BST.
Note : If array size is even, take first mid as root.
Input format :
Line 1 : Integer n (Size of array)
Line 2 : Array elements (separated by space)
Output Format :
BST elements (in pre order traversal, separated by space)
Sample Input :
7
1 2 3 4 5 6 7
Sample Output :
4 2 1 3 6 5 7 
*/
BinaryTreeNode<int>* construct(int* input,int s,int e){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
   BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[mid]); 
root->left=construct(input,s,mid-1);
root->right=construct(input,mid+1,e);
    return root;
}





BinaryTreeNode<int>* constructTree(int *input, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
int s=0;
int e=n-1; 
   construct(input,s,e);
}
