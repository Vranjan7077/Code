/*
Code : Alpha Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 3
A
BB
CCC
Input format : Integer N (Total no. of rows)
Output format : Pattern in N lines
Sample Input : 7
Sample Output :
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG
*/

#include <iostream>
using namespace std;
void pattern(int n)
{
    int number;
    for(int i = 1; i <= n; i++)
    {
    	number=i;
      char s= 'A'+ i - 1;
        for(int j = number; j <(number+i); j++)
        {
            cout << s;
        }
        cout<<"\n";       
    }
}
int main()
{
	int n;
	cin>>n;
    pattern(n);
}
