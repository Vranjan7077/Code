/*
Input and Output
Task 
Read 3 numbers from stdin and print their sum to stdout.
Note: If you plan on completing this challenge in C instead of C++, you'll need to use format specifiers with printf and scanf.

Input Format:
A single line containing 3 space-separated integers:a,b,and c.

Constraints:
1<_a,b,c<_1000

Output Format:
Print the sum of the three numbers on a single line.

Sample Input:
1 2 7

Sample Output:
10
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    cout<<n1+n2+n3<<endl;
    return 0;
}

