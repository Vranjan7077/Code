//merge sort
#include<iostream>
#include<stdio.h>
using namespace std;
int merge_sort(int[],int);
int merge(int a[],int n1, int index1,int b[],int n2,int index2,int c,int index)
{
	while(n1&&n2)
	{
		if(a[index]<b[index2])
		{
			c[index]=a[index];
			index++;
			index1++;
			n1--;
		}
		else
		{
			c[index]=b[index2];
			index++;
			index2++;
			n2--;
		}
	}
	while(n1)
	{
		c[index]=a[index1];
		index++;
		index1++;
		n1--;
	}
	while(n2)
	{
		c[index]=b[index2];
		index++;
		index2++;
		n2--;
	}
}
