/*
Code : Interesting Alphabets
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
Input format : N (Total no. of rows)
Output format : Pattern in N lines
Sample Input : 8
Sample Output :
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
*/

#include<iostream>
using namespace std;
int main()
{
 
   int i,j,n;
   cin>>n;
   for(i=n;i>=1;i--)
     {
         for(j=i;j<=n;j++)
         {
             cout<<((char)(j+64));
         }
         cout<<endl;
     }
  return 0;
}
