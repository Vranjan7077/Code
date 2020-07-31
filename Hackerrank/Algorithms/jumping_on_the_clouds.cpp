#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int num,ar[100],count = 0;
 cin >> num;
 for(int n = 0; n < num; n++)cin >> ar[n];
 for(int i = 1; i < num;count++)
 {
        if(ar[i+1] != 1 && i < num-1)i+=2;
        else i++;  
 }
 cout << count << endl;
 return 0;
}
