/*
Number Pattern 1
Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format : N (Total no. of rows)
Output Format : Pattern in N lines
Sample Input 1 : 3
Sample Output 1 : 
1
23
345
*/

#include <iostream>
using namespace std;
void pattern(int n)
{
    int number;
    for(int i = 1; i <= n; i++)
    {
    	number=i;
        for(int j = number; j <(number+i); ++j)
        {
            cout << j;
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
