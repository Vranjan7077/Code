/*
Code Bubble Sort
Given a random integer array. Sort this array using bubble sort.
Change in the input array itself. You don't need to return or print elements.
Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Constraints : 1 <= N <= 10^3
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1: 1 2 3 4 6 13 28
Sample Input 2:
5
9 3 6 2 0
Sample Output 2: 0 2 3 6 9
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

int BubbleSort(int arr[],int n)
{
	for(int j=0;j<n-1;j++)
	{
		for(int i=0;i<n-1-j;i++)
	    {
		    if(arr[i]>arr[i+1])
		    {
			    int temp=arr[i];
			    arr[i]=arr[i+1];
			    arr[i+1]=temp;
		    }
	    }
	}
}

int main()
{
	int n;
	cin>>n;
	int input[100];
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
	}
	BubbleSort(input,n);
	printArray(input,n);
	
}
