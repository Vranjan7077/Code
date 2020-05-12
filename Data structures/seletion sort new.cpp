// the selection sort of the given logic
#include<iostream>
#include<stdio.h>
using namespace std;
void selection_sort(int a[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
}
void print_Array(int a[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
      cout<<" "<<a[i]; 
    cout<<" "<<"\n"; 
} 
int main() 
{ 
    int a[] = { 64,25,12,22,11 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    selection_sort(a, n); 
    cout<<"The sorted array is:\n ";
    print_Array(a, n); 
    return 0; 
} 
