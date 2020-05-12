/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Input format :
Two integers x and n (separated by space)
Output Format : x^n (i.e. x raise to the power n)
Sample Input 1 :  3 4
Sample Output 1 : 81
Sample Input 2 :  2 5
Sample Output 2 : 32
*/
 
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int x,n;
    cin >> x >> n;
    cout<<(long long)pow(x, n);
     return 0;
}

