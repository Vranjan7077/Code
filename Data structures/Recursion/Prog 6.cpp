/*
Sum of Array
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
Input Format : Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format : Sum
Constraints : 1 <= N <= 10^3
Sample Input : 
3
9 8 9
Sample Output : 26
*/

// -----using recursion -----
int sum(int input[], int n) 
{
    if (n <= 0) 
        return 0; 
    return (sum(input, n - 1) + input[n - 1]); 
} 

/*
#include <iostream>
using namespace std;
void SeparateNumbers (int Array[], int size);
int main()
{
	int size, Arr[100];
	cout<<"Enter the size of the array: ";
	cin>>size;

	cout<<"Enter the number in the array:-"<<endl;
	for(int i=0; i<size; i++)
		cin>>Arr[i];

	SeparateNumbers (Arr, size);
	cout<<endl;

	system("pause");
	return 0;
}

void SeparateNumbers (int Array[], int size)
{
	if(size >= 0)
	{
		if(Array[size-1] > 0)
		{
			cout<<Array[size-1]<<" ";
			SeparateNumbers(Array, size-1);
		}
		else if(Array[size-1] < 0)
		{
			SeparateNumbers(Array, size-1);
			cout<<Array[size-1]<<" ";
		}
	}
}

*/
