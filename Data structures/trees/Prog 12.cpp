/*
Second Largest Element In Tree
Given a generic tree, find and return the node with second largest value in given tree. Return NULL if no node with required value is present.
Input format :
Line 1 : Elements in level order form separated by space (as per done in class). Order is -
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output Format :
Second Largest node data
Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :
40
*/
class MSM{
    public:
TreeNode <int>* max;
TreeNode <int>* secondmax;
    MSM(){
        max=NULL;
        secondmax=NULL;
    }
};
MSM Second(TreeNode<int> *root){
    MSM ans;
    ans.max=root;
    ans.secondmax=NULL;
    if(root==NULL){
        ans.max=root;
        ans.secondmax=NULL;
        return ans;
    }
    for(int i=0;i<root->children.size();i++){
        MSM temp=Second(root->children[i]);
        if(ans.secondmax==NULL && temp.secondmax==NULL){
            if(ans.max->data < temp.max->data){
                TreeNode<int>* x=ans.max;
                ans.max=temp.max;
                ans.secondmax=x;
            }
            else if(ans.max->data > temp.max->data){
                ans.secondmax=temp.max;
            }
        }
        else if(temp.secondmax==NULL){
            if(ans.max->data > temp.max->data){
                if(ans.secondmax<temp.max){
                    ans.secondmax=temp.max;
                }
            }
            else if(ans.max->data < temp.max->data){
                TreeNode<int>* x=ans.max;
                ans.max=temp.max;
                ans.secondmax=x;    
            }
        }
        else if(ans.secondmax==NULL){
            if(ans.max->data < temp.max->data){
               TreeNode<int>* x=ans.max;
                ans.max=temp.max;
                if(x->data > temp.secondmax->data){
                    ans.secondmax=x;
                }
                else{
                    ans.secondmax=temp.secondmax;
                }
            }
            else if(ans.max->data > temp.max->data){
              ans.secondmax=temp.max;
    }
}
        else if(ans.secondmax!=NULL && temp.secondmax!=NULL){
            if(ans.max->data < temp.max->data){
                TreeNode<int>*x = ans.max;
                ans.max=temp.max;
                if(x->data > temp.secondmax->data){
                    ans.secondmax=x;
                }
                else if(x->data < temp.secondmax->data){
                    ans.secondmax=temp.secondmax;
                }
            }
            else if(ans.max->data > temp.max->data){
                if(ans.secondmax->data < temp.max->data){
                    ans.secondmax=temp.max;
                }
            }
        }
    }
  return ans;
}
TreeNode <int>* secondLargest(TreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
  */
    return Second(root).secondmax;
}
