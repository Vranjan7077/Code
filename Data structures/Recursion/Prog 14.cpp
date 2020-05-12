/*
Check Palindrome (recursive)
Check if a given String S is palindrome or not (using recursion). Return true or false.
Input Format : String S
Output Format : true or false
Sample Input 1 : racecar
Sample Output 1: true
Sample Input 2 : ninja
Sample Output 2: false
*/
#include <stdio.h>
#include<iostream> 
#include <string.h> 
#include <stdbool.h> 
using namespace std;
bool helper(char input[],int start, int end) 
{  
    if(start >=end)
  return true;
if(input[start] !=input[end])
  return false;
else
  return (input[start]==input[end] && helper(input,start+1,end-1));
}   
bool checkPalindrome(char input[]) 
{ 
 int n = 0;
    
    for(int i = 0; input[i] != '\0'; i++) {
        n++;
    }
return helper(input, 0, n - 1); 
}
// Driver Code 
int main() 
{ 
    char input[10000] ;
	cin>>input; 
    if (isPalindrome(input)) 
    cout<<"true"; 
    else
    cout<<"false"; 
    return 0; 
} 

