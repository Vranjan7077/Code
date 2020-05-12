#include<iostream>
#include <stdio.h> 
using namespace std; 
int findNonRepeating(int arr[], int n) 
{ 
    int res = 0; 
    for (int i = 0; i < n; i++) 
        res = res ^ arr[i]; 
    return res; 
} 
int main() 
{ 
    int arr[] = {2 ,3 ,1, 6 ,3 ,6 ,2}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << findNonRepeating(arr, n); 
    return 0; 
} 
