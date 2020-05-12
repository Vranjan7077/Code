/*
Print the following pattern with the input 4
ABCD
ABCD
ABCD
ABCD
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
    while(j<=n)
    {
      char ch='A'+j-1;// where 'A'+j-1 this gives the ASCII value
      cout<<ch;
      j++;
    }
    cout<<endl;
    i++;
   }
}
