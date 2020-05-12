/*
Merge Sort Code
Sort an array A using Merge Sort.
Change in the input array itself. So no need to return or print anything.
Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)
Output format : Array elements in increasing order (separated by space)
Constraints : 1 <= n <= 1000
Sample Input:
6 
2 6 8 5 4 3
Sample Output: 2 3 4 5 6 8
*/

/*
#include<iostream>
#include<stdio.h>
using namespace std;
int merge( array, low, mid, high )
{
	int temp[MAX];
	int i = low;
	int j = mid +1 ;
	int k = low ;
	while( (i <= mid) && (j <=high) )
	{
		if(array[i] <= array[j])
			temp[k++] = array[i++] ;
		else
			temp[k++] = array[j++] ;
	}	
	while( i <= mid )
		temp[k++]=array[i++];
	while( j <= high )
		temp[k++]=array[j++];
	for(i= low; i <= high ; i++)
		array[i]=temp[i];	
}
void merge_sort( int low, int high )
{
	int mid;
	if( low != high )
	{
		mid = (low+high)/2;
		merge_sort( low , mid );
		merge_sort( mid+1, high );
		merge( low, mid, high );
	}
}
int main()
{
	int i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<i+1;
		cin>>array[i];
	}
	for( i = 0 ; i<n ; i++)
		cout<< array[i];
	merge_sort( 0, n-1);
	for( i = 0 ; i<n ; i++)
	    cout<<array[i] << endl;
	return 0;
}
*/

#include <iostream>
using namespace std;
void Merge(int *a, int low, int high, int mid)
{
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
 	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
		Merge(a, low, high, mid);
	}
}
int main()
{
	int n, i;
	cin>>n;
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<i+1<<": ";
		cin>>arr[i];
	}
	MergeSort(arr, 0, n-1);
 	for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
 	return 0;
}
