/*
Wave Print

Given a two dimensional n*m array, print the array in a sine wave order. i.e. print the first column top to bottom, next column bottom to top and so on.
Note : Print the elements separated by space.
Input format :
n, m, array elements (separated by space)
Sample Input : 3 4 1  2  3  4 5  6  7  8 9 10 11 12
Sample Output : 1 5 9 10 6 2 3 7 11 12 8 4
*/

#include<iostream>
using namespace std;
void waveprint(int input[][1000],int row,int col)
{
	if(row==0)
	{
		return;
	}
	int numRows=row;
	int numCols=col;
	for (int j=0;j<numCols;j++)
	{
		if(j%2==0)
		{
			for(int i=0;i<numRows;i++)
			{
				cout<<input[i][j]<<" ";
			}
		}
		else
		{
			for(int i=row-1;i>=0;i--)
			{
				cout<<input[i][j]<<" ";
			}
		}
	}
}
