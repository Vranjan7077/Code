/*
Sort 0 1
You are given an integer array A that contains only integers 0 and 1. Write a function to sort this array. Find a solution which scans the array only once. Don't use extra array.
You need to change in the given array itself. So no need to return or print anything.
Input format :
Line 1 : Integer N (Array Size)
Line 2 : Array elements (separated by space)
Output format : Sorted array elements
Constraints : 1 <= N <= 10^6
Sample Input :
7
0 1 1 0 1 0 1
Sample Output : 0 0 0 1 1 1 1
*/
#include<iostream>
using namespace std;
void SortZeroesAndOne(int arr[],int n)
{
	int ptr=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			int temp=arr[ptr];
			arr[ptr]=arr[i];
			arr[i]=temp;
			ptr++;
		}
	}
}
