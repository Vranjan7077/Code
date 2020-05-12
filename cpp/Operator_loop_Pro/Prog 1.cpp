/*
Nth Fibonacci Number
Nth term of fibonacci series F(n) is calculated using following formula -F(n) = F(n-1) + F(n-2), 
Provided N you have to find out the Nth Fibonacci Number. Also F(1) = F(2) = 1.
Input Format : Integer n
Constraints: Time Limit: 1 second
Output Format : Nth Fibonacci term i.e. F(n)
Sample Input : 4
Sample Output : 3 
*/
#include<iostream>
using namespace std; 
int fib(int n) 
{ 
   if (n <= 1) 
      return n; 
   return fib(n-1) + fib(n-2); 
} 
  
int main () 
{ 
  int n ;
  cin>>n; 
  cout<<fib(n); 
  getchar(); 
  return 0; 
} 
