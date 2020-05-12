//all sorting in one program
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
void insertion_sort(int a[],int n)
{
	int i,j,v;
	for(i=2;i<=n-1;i++)
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
int shell_sort(int a[], int n) 
{ 
    for (int gap = n/2; gap > 0; gap /= 2) 
    { 
        for (int i = gap; i < n; i += 1) 
        {  
            int temp = a[i];  
            int j;             
            for (j = i; j >= gap && a[j - gap] > temp; j -= gap) 
                a[j] = a[j - gap]; 
            a[j] = temp; 
        } 
    } 
    return 0; 
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
	cout << "Array before sorting:\n"; 
	print_Array(a, n);  
	insertion_sort(a, n);
	cout<<"The insertion sort of the array is:\n"; 
	cout<<"The array after sorting as follows:\n\n";
	print_Array(a, n); 
    bubble_sort(a, n);
	cout<<"The bubble sort of the array is:\n"; 
    print_Array(a, n); 
    selection_sort(a, n); 
    cout<<"The selection sort of the array is:\n";
    
    
    print_Array(a, n); 
    shell_sort(a, n);
	cout<<"The shell sort of the array is:\n"; 
    print_Array(a, n); 
    return 0; 
}
