/*
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits means numbers not the places. That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
Input format :  Integer N
Output format : Sum_of_Even_Digits Sum_of_Odd_Digits
(Print first even sum and then odd sum separated by space)
Sample Input : 1234
Sample Output : 6 4
*/

#include<iostream>
using namespace std;

int main()
{
    int n, se = 0, sd = 0, r;
    cin>>n;
    while ( n> 0)
    {
        r = n % 10;
        if (r % 2 == 0)
        {
          se = se + r;
        }
      else
      {
          sd = sd + r;
      }
        n = n/ 10;
    }
    cout << se << " " <<sd;
	return 0;
}

