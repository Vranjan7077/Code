/*
Print Level Wise
Given a binary tree, print the tree in level wise order.
For printing a node with data N, you need to follow the exact format -
N:L:x,R:y
wherer, N is data of any node present in the binary tree. x and y are the values of left and right child of node N. Print -1. if any child is null.
There is no space in between.
You need to print all nodes in the level order form in different lines.
Input format :
Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Sample Input :
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
Sample Output :
8:L:3,R:10
3:L:1,R:6
10:L:-1,R:14
1:L:-1,R:-1
6:L:4,R:7
14:L:13,R:-1
4:L:-1,R:-1
7:L:-1,R:-1
13:L:-1,R:-1
*/
void printLevelWise(BinaryTreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    if(root==NULL){
        return;
    }

queue<BinaryTreeNode<int>*>pending;
    pending.push(root);
    while(pending.size()!=0){
        BinaryTreeNode<int>*front = pending.front();
        pending.pop();
        cout<<front->data<<':';
        if(front->left!=NULL){
            cout<<'L'<<':'<<front->left->data<<',';
            pending.push(front->left);
        }
        else{
            cout<<'L'<<':'<<-1<<',';
        }
        if(front->right!=NULL){
            cout<<'R'<<':'<<front->right->data;
             pending.push(front->right);
        }
        else{
            cout<<'R'<<':'<<-1;
        }
        cout<<endl;
    }
}
