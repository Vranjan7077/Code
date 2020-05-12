/*
Code : Triangle Number Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
22
333
4444
Input format : Integer N (Total no. of rows)
Output format : Pattern in N lines
Sample Input : 5
Sample Output :
1
22
333
4444
55555
*/

#include <iostream>
using namespace std;
int main()
{
   int n, i, j;
   cin >> n;
   for(i = 1; i <= n; i++)
   {
      for(j = 1; j <= i; j++)
      {
         cout <<i;
      }
      cout << "\n";
   }
   return 0;
}
