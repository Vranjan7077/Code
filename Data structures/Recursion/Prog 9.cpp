/*
Multiplication (Recursive)
Given two integers m & n, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
Input format : m and n (in different lines)
Sample Input :
3 
5
Sample Output : 15
*/

#include <iostream> 
using namespace std; 
int product(int x, int y) 
{ 
    if (x < y) 
        return product(y, x); 
    else if (y != 0) 
        return (x + product(x, y - 1)); 
    else
        return 0; 
} 

int main() 
{ 
    int x,y;
	cin>>x>>y; 
    cout << product(x, y); 
    return 0; 
} 
