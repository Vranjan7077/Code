/*
Print nodes at distance k from node
Given a binary tree, a node and an integer K, print nodes which are at K distance from the the given node.
Input format :

Line 1 : Elements in level order form (separated by space)

(If any node does not have left or right child, take -1 in its place)

Line 2 : Node

Line 3 : K

Output format : Answer nodes in different line

Sample Input :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
3
1
Sample Output :
9
6

*/
void print(BinaryTreeNode<int>* root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
    print(root->left,k-1);
    print(root->right,k-1);
}
int nodedistance(BinaryTreeNode<int> *root,int node,int k){
     if(root==NULL){
        return -1;
    }
    if(root->data==node){
        print(root,k);
        return 0;
    }
    int ld=nodedistance(root->left,node,k);
    if(ld!=-1){
    if(ld+1==k){
        cout<<root->data<<endl;
    }
    else{
        print(root->right,k-ld-2);
    }
        return ld+1;
    }
    int rd=nodedistance(root->right,node,k);
    if(rd!=-1){
    if(rd+1==k){
        cout<<root->data<<endl;
    }
    else{
        print(root->left,k-rd-2);
    }
    return rd+1;
    }
}






void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) {
    // Write your code here
   nodedistance(root,node,k);

}
