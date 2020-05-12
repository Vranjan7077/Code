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
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
    	bool isPrime=true;
    	for(int j=2;j<i;j++)
    	{
    		if(i%j==0)
    		{
    			isPrime=false;
    			break;
			}
		}
		if(isPrime)
		{
			cout<<i<<endl;
		}
	}
return 0;
}
