/*
Count Zeros
Given an integer n, count and return the number of zeros that are present in the given integer using recursion.
Input Format : Integer n
Output Format : No. of 0s
Sample Input : 10204
Sample Output : 2
*/
#include<iostream>
using namespace std;
int countZeros(int n) 
{
    if(n>0)
    {
		if( (n % 10) == 0)
        {
			return  countZeros(n/10)+1;
		}
		return countZeros(n/10);
	}	
}

int main()
{

	int n = 0;
	int count = 0;
	cin>>n;
	if(n < 0 ){
		n = -n;
	}
	cout<<countZeros(n);
}
