#include<iostream>
#include<stdio.h>
using namespace std;
void merge_sort(int a[],int temp[],int left,int right,int mid)
{
	int i,left_end,size,temp_pos;
	left_end=mid-1;
	temp_pos=left;
	size=right-left+1;
	while((left<=left_end)&&(mid<=right))
	{
		if(a[left]<=a[mid])
		{
			temp[temp_pos]=a[left];
			temp_pos=temp_pos+1;
			left=left+1;
		}
		else
		{
			temp[temp_pos]=a[mid];
			temp_pos=temp_pos+1;
			mid=mid+1;
		}
	}
	while(left<=left_end)
	{
		temp[temp_pos]=a[left];
		left=left+1;
		temp_pos=temp_pos+1;
	}
	while(mid<=right)
	{
		temp[temp_pos]=a[left];
		left=left+1;
		temp_pos=temp_pos+1;
	}
	for(i=0;i<=size;i++)
	{
		a[right]=temp[right];
		right=right-1;
	}
}
void printArray(int a[], int n) 
{ 
    for (int i=0; i<n; i++) 
        cout << a[i] << " "; 
}   
int main() 
{ 
    int arr[] = {12, 34, 54, 2, 3}, i; 
    int n = sizeof(a)/sizeof(a[0]); 
    cout << "Array before sorting: \n"; 
    printArray(a, n); 
    merge_sort(a, n); 
    cout << "\nArray after sorting: \n"; 
    printArray(a, n); 
    return 0; 
}
