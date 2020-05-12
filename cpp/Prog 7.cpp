/*
Start Pattern 
Print the following pattern
Pattern for N = 4
    *
   *** 
  *****
 *******
Input Format : N (Total no. of rows)
Output Format : Pattern in N lines
Sample Input 1 : 3
Sample Output 1 :
   *
  *** 
 *****

*/

#include <iostream>
using namespace std;
int main()
{
   int rows, i, j, space;
   cin >> rows;
   for(i = 1; i <= rows; i++)
   {
      for(space = i; space < rows; space++)
      {
         cout << " ";
      }
     for(j = 1; j <= (2 * i - 1); j++)
      {
         cout << "*";
      }
   cout << "\n";
   }
  return 0;
}
