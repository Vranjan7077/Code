/*
All Prime Numbers 
Given an integer N, print all the prime numbers that lies in between 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format : Integer N
Output Format : Prime number in different lines
Constraints : 1 <= N <= 100
Sample Input : 9
Sample Output :
2
3
5
7
*/

#include <iostream>
using namespace std;
int isPrimeNumber(int);
int main()
{
   bool isPrime;
   for(int n = 2; n < 100; n++) 
   {
      isPrime = isPrimeNumber(n);
      if(isPrime == true)
         cout<<n<<" ";
         cout<<endl;
         
   }
   return 0;
}

// Function that checks whether n is prime or not
int isPrimeNumber(int n) 
{
   bool isPrime = true;
   for(int i = 2; i <= n/2; i++) 
   {
      if (n%i == 0) 
	  {
         isPrime = false;
         break;
      }
   }  
   return isPrime;
}

