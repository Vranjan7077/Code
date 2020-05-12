// the insertion sort of the given logic
#include<iostream>
#include<stdio.h>
using namespace std;
void insertion_sort(int a[],int n)
{
	int i,j,v;
	for(i=1;i<=n-1;i++)
	{
		v=a[i];
		j=i;
		while(a[j-1]>v && j>=1)
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=v;
	}
}

void print_Array(int a[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
      cout<<" "<<a[i]; 
    cout<<" "<<"\n"; 
} 
int main() 
{ 
    int a[] = { 12, 11, 13, 5, 6 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    insertion_sort(a, n); 
    print_Array(a, n); 
    return 0; 
} 
