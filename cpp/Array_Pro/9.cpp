/*
Count Inversions
Let A[0 ... n-1] be an array of n distinct positive integers. If i < j and A[i] > A[j] then the pair (i, j) is called an inversion of A (where i and j are indexes of A). Given an integer array A, your task is to find the number of inversions in A.
Input format : 
Line 1 : n, array size
Line 2 : Array elements (separated by space).
Output format : Count of inversions
Constraints :
1 <= n <= 10^5
1 <= A[i] <= 10^9
Sample Input 1 :
3
3 2 1
Sample Output 1 : 3
Sample Input 2 :
5
2 5 1 3 4
Sample Output 1 : 4
*/
#include<iostream>
using namespace std;
long long Merge(int A[],int left, int mid, int right)
{
	int i =left,j=mid, k=0;
	long long inv_cnt=0;
	int temp[(right-left+1)];
	while((i<mid)&&(j<=right))
	{
		if(A[i]<=A[j])
		{
			temp[k++]=A[i++];
		}
		else
		{
			temp[k++]=A[j++];
			inv_cnt+=(mid-i);
		}
	}
	while(i<mid)
	{
		temp[k++]=A[i++];
	}
	while(j<=right)
	{
		temp[k++]=A[j++];
	}
	for(i=left,k=0;i<=right;i++,k++)
	{
		A[i]=temp[k];
	}
	return inv_cnt;
}
long long MergeSort(int A[],int left,int right)
{
	long long inv_cnt=0;
	if(right>left)
	{
		int mid=(right+left)/2;
		inv_cnt=MergeSort(A,left,mid);
		inv_cnt+=MergeSort(A,mid+1,right);
		inv_cnt+=Merge(A,left,mid+1,right);
	}
	return inv_cnt;
}
long long solve(int A[],int n)
{
	return MergeSort(A,0,n-1);
}
