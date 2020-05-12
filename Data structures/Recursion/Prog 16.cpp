/*
All Indices of Number
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format : indexes where x is present in the array (separated by space)
Constraints : 1 <= N <= 10^3
Sample Input : 
5
9 8 10 8 8
8
Sample Output : 1 3 4
*/

#include<iostream>
using namespace std;

void findIndices(int input[], int size, int x, int output[], int &k, int currIndex){
	if(currIndex==size){
		return;
	}
	if(input[currIndex]==x){
		output[k] = currIndex;
		k++;
	}
	findIndices(input,size,x,output,k,++currIndex);
}

int allIndices(int input[], int size, int x, int output[]){
	int k = 0;
	findIndices(input,size,x,output,k,0);
	return k;
}
int main(){
	int size = 5;
	int input[] = {9,8,10,8,8};
	int x = 8;
	int output[5];
	int outputSize = allIndices(input,size,x,output);
	for(int i =0;i<outputSize;i++){
		cout<<output[i]<<" ";
	}
	return 0;
}

