/*
Binary to decimal
Given a binary number as an integer N, convert it into decimal and print.
Input format : An integer N
Output format : Corresponding Decimal number (as integer)
Sample Input 1 : 1100
Sample Output 1 : 12
Sample Input 2 : 111
Sample Output 2 : 7
*/
#include <iostream>
#include <cmath>
using namespace std;
int con_Bin_To_Dec(long long);
int main()
{
    long long n;
    cin >> n;
    cout << con_Bin_To_Dec(n);
    return 0;
}
int con_Bin_To_Dec(long long n)
{
    int dec_num = 0, i = 0, rem;
    while (n!=0)
    {
        rem = n%10;
        n /= 10;
        dec_num+= rem*pow(2,i);
        ++i;
    }
    return dec_num;
}
