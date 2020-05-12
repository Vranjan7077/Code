//insertion sort
#include<iostream>
#include<stdio.h>
using namespace std;
int insertion_sort(int[],int);
int main()
{
	int a[]={34,45,11,89,55};
	int i;
	insertion_sort(a,5);
	for(i=0;i<=4;i++)
	{
		cout<<" "<<a[i];
	}	
}
int insertion_sort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1; j>=0 && temp<a[j] ; j--)
		a[j+1]=a[j];
		a[j+1]=temp;
	}
}

