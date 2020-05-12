/*
Arrange Numbers in Array
Given a number n, put all elements from 1 to n in an array in order - 1,3,.......4,2.
Input Format :  Integer n
Output Format :  Elements of the array separated by space.
Sample Input 1 : 6
Sample Output 1 : 1 3 5 6 4 2
Sample Input 2 : 9
Sample Output 2 : 1 3 5 7 9 8 6 4 2
*/



#include <bits/stdc++.h> 
using namespace std; 
void rearrangeNaive(int arr[], int n) 
{ 
    int temp[n], i; 
    for (i = 0; i < n; i++) 
        temp[arr[i]] = i; 
    for (i = 0; i < n; i++) 
        arr[i] = temp[i]; 
} 
  
// A utility function to print contents of arr[0..n-1] 
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
    cout << ("%d ", arr[i]); 
    cout << ("\n"); 
} 
int main() 
{ 
    int arr[] = { 1, 3, 0, 2 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << ("Given array is \n"); 
    printArray(arr, n); 
    rearrangeNaive(arr, n); 
    cout << ("Modified array is \n"); 
    printArray(arr, n); 
    return 0; 
} 
