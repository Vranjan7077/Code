/*
Node with maximum child sum
Given a tree, find and return the node for which sum of data of all children and the node itself is maximum. In the sum, data of node itself and data of immediate children is to be taken.
Input format :
Line 1 : Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output format :
Node with maximum sum.
Sample Input 1 :
5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0
Sample Output 1 :
1
*/
TreeNode<int>* maxSumNode(TreeNode<int> *root){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
//10 3 20 30 40 2 40 50 0 0 0 0
    TreeNode<int>* ans=root;
    int sum = ans->data;
    for(int i=0;i<ans->children.size();i++){
        sum+=ans->children[i]->data;
    }
    for(int i=0;i<root->children.size();i++){
       TreeNode<int>* temp=maxSumNode(root->children[i]); 
        int tempsum=temp->data;
        for(int i=0;i<temp->children.size();i++){
            tempsum+=temp->children[i]->data;
        }
        if(sum<tempsum){
            ans=temp;
            sum=tempsum;
        }
    }
 return ans;   
}
