// the bubble sort of the given logic
#include<iostream>
#include<stdio.h>
using namespace std;
void bubble_sort(int a[],int n)
{
	for(int pass=n-1;pass>=0;pass--)
	{
		for(int i=0;i<=pass-1;i++)
		{
			if(a[i]>a[i+1])
			{
				int temp;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
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
    bubble_sort(a, n); 
    cout<<"The sorted array is:\n ";
    print_Array(a, n); 
    return 0; 
} 
