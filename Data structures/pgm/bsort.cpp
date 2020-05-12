//bubble sort
#include<iostream>
#include<stdio.h>
using namespace std;
int bubble_sort(int[],int);
int main()
{
	int a[]={34,15,28,39};
	int i;
	bubble_sort(a,4);
	for(i=0;i<=3;i++)
	cout<<" "<<a[i];
}
int bubble_sort(int a[],int n)
{
	int pass,i,temp;
	for(pass=1;pass<=n-1;pass++)
	for(i=0;i<=n-1-pass;i++)
	if(a[i]>a[i+1])
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
}
