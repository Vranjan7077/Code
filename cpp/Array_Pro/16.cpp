/*
Spiral Print
Given an N*M 2D array, print it in spiral form. That is, first you need to print the 1st row, then last column, then last row and then first column and so on.
Print every element only once.
Input format :
Line 1 : N and M, No. of rows & No. of columns (separated by space) followed by N*M  elements in row wise fashion.
Sample Input :  4 4 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
Sample Output : 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
*/
#include <iostream>
using namespace std;
void spiralPrint(int matrix[][1000],int row,int col)
{
	int i,rowStart=0,colStart=0;
	int numElements=(row*col),count=0;
	while(count<numElements)
	{
		for(i=colStart;count<numElements&&i<col;++i)
		{
			cout<<matrix[rowStart][i]<<" ";
			count++;
		}
		rowStart++;
		for(i=rowStart;count<numElements&&i<row;++i)
		{
			cout<<matrix[i][col-1]<<" ";
			count++;
		}
	    col--;
	    for(i=col-1;count<numElements&&i>=colStart;--i)
	    {
	    	cout<<matrix[row-1][i]<<" ";
			count++;
		}
		row--;
		for(i=row-1;count<numElements&&i>=rowStart;--i)
		{
			cout<<matrix[i][colStart]<<" ";
			count++;
		}
		colStart++;
	}
}
