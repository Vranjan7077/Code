/*
Code : Reverse Number Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
21
321
4321
Input format : Integer N (Total no. of rows)
Output format : Pattern in N lines
Sample Input : 5
Sample Output :
1
21
321
4321
54321
*/

#include <iostream>
using namespace std;
int main()
{
   int n, i, j;
   cin >> n;
   for(i = 1; i <= n; i++)
   {
      for(j = i; j >= 1; j--)
      {
         cout <<j;
      }
      cout << "\n";
   }
   return 0;
}
