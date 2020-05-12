/*
Code : Max data node
Given a generic tree, find and return the node with maximum data. You need to return the complete node which is having maximum data.
Return null if tree is empty.
Input format :
Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output Format :Node with largest data
Sample Input :10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output :50
*/
TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.*/
    TreeNode<int>* temp=root;
    for(int i=0;i<root->children.size();i++){
       TreeNode<int>* max=maxDataNode(root->children[i]);
        if(temp->data<max->data){
            temp=max;
        }
    }
    return temp;
}
