/*
Code Insertion Sort
Given a random integer array. Sort this array using insertion sort.
Change in the input array itself. You don't need to return or print elements.
Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Constraints : 1 <= N <= 10^3
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1: 1 2 3 4 6 13 28
Sample Input 2:
5
9 3 6 2 0
Sample Output 2: 0 2 3 6 9
*/

#include <iostream> 
using namespace std; 
void insertionSort(int arr[],int n)
{
   for(int i=1;i<n;i++)
   {
   	int current=arr[i];
   	int j;
   	for(j=i-1;j >=0 ;j--)
   	    {
   		    if(current<arr[j])
   		    {
		        arr[j+1]=arr[j];
		    }
		    else
		    {
			    break;
		    }
	    }
	arr[j+1]=current;
   }
}

void printArray(int input[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<input[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;//take array from the user
	cin>>n;
	int input[100];
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
	}
	insertionSort(input,n);
	printArray(input,n);
} 
