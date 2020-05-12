/*
Swap Alternate
Given an array of length N, swap every pair of alternate elements in the array.
You don't need to print or return anything, just change in the input array itself.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Elements after swapping, separated by space.
Sample Input 1:
6
9 3 6 12 4 32
Sample Output 2 : 3 9 12 6 32 4
Sample Input 1:
9
9 3 6 12 4 32 5 11 19
Sample Output 2 : 3 9 12 6 32 4 11 5 19
*/

#include<iostream>
using namespace std;
int main()
{
    int i, t, num, arr[100];
    cin>>num;
    for (i = 0; i < num; i++) 
	{
        cin >> arr[i];
    }
    i = 0;
    while (i < num - 1) 
	{
        t = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = t;
        i = i + 2;
    }
    for (i = 0; i < num; i++)
	{
        cout << arr[i] << " ";
    }
    return 0;
}

/* or 
void swapAlternate(int arr[],int size)
{
 for (int i=0;i<size-1;i+=2)
  {
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
   }
}
*/
