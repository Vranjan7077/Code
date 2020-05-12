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
void printpair(vector<BinaryTreeNode<int>*> output,int i,int j,int s){
    while(i<j){
        if(output[i]->data + output[j]->data == s){
            cout<<output[i]->data<<" "<<output[j]->data<<endl;
            i++;
            j--;
        }
        else if(output[i]->data + output[j]->data > s){
            j--;
        }
        else if(output[i]->data + output[j]->data < s){
            i++;
        }
    }
}
void sortarray(BinaryTreeNode<int>* root,vector<BinaryTreeNode<int>*> &output){
    if(root==NULL){
        return;
    }
    sortarray(root->left,output);
    output.push_back(root);
    sortarray(root->right,output);
}
void printNodesSumToS(BinaryTreeNode<int> *root, int s) {
    //Write your code here
vector<BinaryTreeNode<int>* >output;
    sortarray(root,output);

 int i=0;
int j=output.size()-1;
  printpair(output,i,j,s);

}
