/*
fibonacci series ---- eg: 0 1 1 2 3 5 8 12 21 34
In this series we should start with the 0 and 1 and after that we add both of them and get the 3rd number and so on.
----
Base case : Prove F(0) on F(1) is true
IH : Assume F(i) is true 0<_i<_k
IS : Use 2 to prove F(k+1) is true
----
*/
#include<iostream>
using namespace std;
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	int smalloutput1 = fib(n-1);
	int smalloutput2 = fib(n-2);
	return smalloutput1 + smalloutput2;
}
int main()
{ 
	cout<<fib(3)<<endl;
}

