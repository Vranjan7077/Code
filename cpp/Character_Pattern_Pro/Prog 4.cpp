/*
Code : Character Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
Input format : Integer N (Total no. of rows)
Output format : Pattern in N lines
Sample Input : 5
Sample Output :
A
BC
CDE
DEFG
EFGHI
*/

#include <iostream>
using namespace std;
void pattern(int n)
{
    int number;
    for(int i = 1; i <= n; i++)
    {
    	number=i;
        for(int j = number; j <(number+i); j++)
        {
            char s = j+'A'-1;
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
