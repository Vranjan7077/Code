/*
Staircase
A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.
Input format : Line 1 : Integer N (No. of steps) 
Output Format : Line 1 : Integer W i.e. Number of possible ways
Constraint : (1 <= N <= 30)
Sample Input 1: 4
Sample Output : 7
*/

#include<iostream>
using namespace std;
//Recursive Function
int staircase(int n){
    if(n<0){            //Base Case 1
        return 0;
    }

    if(n==0){           //Base Case 2
        return 1;
    }
    int count = 0;
    count += staircase(n-1);    //Stepping 1 step
    count += staircase(n-2);    //Stepping 2 step
    count += staircase(n-3);    //Stepping 3 step
    return count;
} 
int main()
{
    int n;
    cin>>n;    
    cout<<staircase(n)<<endl;
    return 0;

}
