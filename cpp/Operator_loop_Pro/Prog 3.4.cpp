/*
Decimal to Binary
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note : The given input number could be large, so the corresponding binary number can exceed the integer range. So take the answer as long.
Input format : Integer N
Output format : Corresponding Binary number (long)
Sample Input 1 : 12
Sample Output 1 : 1100
Sample Input 2 : 7
Sample Output 2 : 111
*/

#include <iostream> 
using namespace std; 
void con_Dec_To_Bin(int n) 
{ 
    int bin_num[32]; 
    int i = 0; 
    while (n > 0) 
	{ 
        bin_num[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        cout << bin_num[j]; 
} 
int main() 
{ 
    int n ;
    cin>>n;
    con_Dec_To_Bin(n); 
    return 0; 
} 
