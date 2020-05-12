/*
Reverse of a number
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Input format : Integer N
Constraints: Time Limit: 1 second
Output format : Corresponding reverse number
Sample Input 1 : 1234
Sample Output 1 : 4321
Sample Input 2 : 1980
Sample Output 2 : 891
*/
#include <iostream>
using namespace std;
int main()
{
    int n, reversedNumber = 0, remainder;
    cin >> n;
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    cout<<reversedNumber;
    return 0;
}
