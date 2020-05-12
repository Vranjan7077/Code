/*
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
--> totalSalary = basic + hra + da + allow - pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = 'A'
allow = 1500 if grade = 'B'
allow = 1300 if grade = 'C' or any other character
pf    = 11% of basic.

Round off the total salary and then print the integral part only.
Input format : Basic salary & Grade (separated by space)
Output Format : Total Salary
Sample Input 1 : 10000 A
Sample Output 1 : 17600
Sample Input 2 : 4567 B
Sample Output 2 : 8762
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int basic,allow;
double tsal,hra,da,pf;
char grade;
cin>>basic;
cin>>grade;
hra=(double)(basic*20)/100;
da=(double)(basic*50)/100;
pf=(double)(basic*11)/100;
switch(grade)
    {
      case 'A':allow=1700;
	   break;
    case 'B':allow=1500;
    break;
    default : allow=1300;
    }
tsal= basic + hra + da + allow - pf;
tsal=round(tsal);
cout<<(int)tsal;
}

