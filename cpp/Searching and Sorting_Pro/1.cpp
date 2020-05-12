/*
Code Binary Search
Given a sorted integer array (in ascending order) and an element x. You need to search this element x in the given input array using binary search. Return the index of element in the input.
Indexing starts from 0.
Return -1 if x is not present in the input array.
Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Line 3 : Element to be searched (i.e. x)
Output Format : Index
Constraints :
1 <= N <= 10^6
Sample Input 1:
7
1 3 7 9 11 12 45
3
Sample Output 1: 1
Sample Input 2:
7
1 2 3 4 5 6 7
9
Sample Output 2: -1
*/
#include <iostream> 
using namespace std; 

int BinarySearch(int arr[],int n,int x)
{
	int start=0,end=x-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(arr[mid]==x)
		{
			return mid;
		}
		else if(x<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
	int input[100];
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
	}
	int x;
	cin>>x;
	cout<<BinarySearch(input,n,x)<<endl;
}


/*
int BinarySearch(int arr[], int n, int val)
{	
	//
      int start=0,end=n-1;
      int mid;
      while(start<=end)
      {
        mid=(start+end)/2;
        if(val==arr[mid])
        return mid;
        else if(val>arr[mid])
           start=mid+1;
        else if(val<arr[mid])
           end=mid-1;
        }
return -1;
}


*/
