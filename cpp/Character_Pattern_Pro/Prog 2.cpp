/*
Print the following pattern with the input 4
ABCD
BCDE
CDEF
DEFG
and so on....
*/

#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n)
  {
    int j=1;
    char start_char='A'+i-1;
    while(j<=n)
    {
      char ch=start_char+j-1;
      cout<<ch;
      j++;
    }
    cout<<endl;
    i++;
   }
}
