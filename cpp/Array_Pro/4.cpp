#include <iostream> 
using namespace std; 
  
int linearsearch(int arr[], int n, int val) //int linearSearch(int arr[], int n ,int val)
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == val) 
            return i; 
    return -1; 
} 
  
int main(void) 
{ 
    int arr[];
	cin>>arr[]; 
    int val = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = search(arr, n, val); 
   (result == -1)? cout<<<<result; 
   return 0; 
} 

