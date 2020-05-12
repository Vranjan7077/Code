/*Check Case
Write a program to determine whether the entered character is in uppercase or lowercase, or is an invalid character.
Print :
 1 for uppercase
 0 for lowercase 
-1 for any other character (special characters or others)
Input format : 
Single Character
Output format : 1 or 0 or -1
Sample Input 1 : v
Sample Output 1 : 0
Sample Input 2 : V
Sample Output 2 : 1
Sample Input 3 : #
Sample Output 3 : -1
*/
Solution 
#include<iostream>
using namespace std;
int main()
{
  char ch;
    cin >> ch;
 	if(ch >= 'a' && ch <= 'z')
    {
        cout <<"0";
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
    	cout<<"1";
        
    }
    else
    {        
        cout <<"-1";       
    }
	return 0;
}

