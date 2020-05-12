/*
Replace with depth
In a given Generic Tree, replace each node with its depth value. You need to just update the data of each node, no need to return or print anything.
Input format :
Line 1 : Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 : (Level wise, each level in new line)
0 
1 1 1 
2 2
*/
 void depthvalue(TreeNode<int> *root , int j){
    if(root->children.size()==0){
        root->data = j;
        return;
    }
    for(int i=0;i<root->children.size();i++){
        depthvalue(root->children[i],j+1);
    }
    root->data = 
    j--;
    return;
}
void replaceWithDepthValue(TreeNode<int> *root){    
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the input tree itself.
     * No need to return pr print the output.
     * Taking input and printing output is handled automatically.
     */
int j=0;
    depthvalue(root,j);
}
