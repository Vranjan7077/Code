#include <bits/stdc++.h> 
using namespace std; 
  
void towerOfHanoi(int n, char source,char auxiliary, char destination)  
{  
    if (n == 1)  
    {  
        cout <<source << auxiliary << endl;  
        return;  
    }  
    towerOfHanoi(n - 1, source, destination, auxiliary);  
    cout << n << source << auxiliary << endl;  
    towerOfHanoi(n - 1, destination, auxiliary, source);  
}  
  
// Driver code 
int main()  
{  
    int n;
	cin>>n; 
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;  
}  
  
