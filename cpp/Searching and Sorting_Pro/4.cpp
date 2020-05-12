/*
Code Merge Two Sorted Arrays
Given two sorted arrays of Size M and N respectively, merge them into a third array such that the third array is also sorted.
Input Format :
 Line 1 : Size of first array i.e. M
 Line 2 : M elements of first array separated by space
 Line 3 : Size of second array i.e. N
 Line 2 : N elements of second array separated by space
Output Format :
M + N integers i.e. elements of third sorted array separated by spaces.
Constraints : 1 <= M, N <= 10^6
Sample Input :
5
1 3 4 7 11
4
2 4 6 13
Sample Output : 1 2 3 4 4 6 7 11 13 
*/

#include <iostream> 
using namespace std; 
void printArray(int input[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<input[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;//take array from the user
	cin>>n;
	int input[100];
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
	}
	mergeSort(input,n);
	printArray(input,n);
} 
