/*
Sum of digits (recursive)
Write a recursive function that returns the sum of the digits of a given integer.
Sample Input : 12345
Sample Output : 15
*/
#include<iostream>
#include <stdio.h>
using namespace std; 
int sumOfDigits(int n) 
{ 
    if (n == 0) 
       return 0; 
    return (n % 10 + sumOfDigits(n / 10)); 
} 
 
int main() 
{ 
    int num;
	cin>>num; 
    int result = sumOfDigits(num); 
    cout<< result; 
    return 0; 
} 
