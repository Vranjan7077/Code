/*
The following code is to print the pattern like -
If the input is 4
****
****
****
****
If the input is 3
***
***
***
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
      cout<<"*";
      j++;
     }
   cout<<endl;
   i++;
   }
}
