/*
Path Sum Root to Leaf
Given a binary tree and a number k, print out all root to leaf paths where the sum of all nodes value is same as the given number k.
Input format :
Line 1 : Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Line 2 : k
Output format : Print each path in new line, elements separated by space
Sample Input 1 :
5 6 7 2 3 -1 1 -1 -1 -1 9 -1 -1 -1 -1
13
Sample Output 1 :
5 6 2
5 7 1
*/
void roottoleaf(BinaryTreeNode<int> root,int k,vector<BinaryTreeNode<int>> v){
    
    if(root==NULL||k<0){
        return;
    }
    
    v.push_back(root);
    k = k - root -> data;
    if((k==0) && ((root -> left == NULL) && (root -> right == NULL))){
        //Print the vector
        for(int i = 0; i < v.size(); i++){
            cout << v[i]->data << " ";
        }
        cout << endl;
        return;
    }
 roottoleaf(root->left,k,v);
 roottoleaf(root->right,k,v);

}
