/*
Fahrenheit to Celsius Table
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format : 3 integers - S, E and W respectively 
Output Format : Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value. On Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")
Sample Input :
0 
100 
20
Sample Output :
0   -17
20  -6
40  4
60  15
80  26
100 37
*/

#include<iostream>
using namespace std;
int main()
{
    double  fstrt, fend, w;
    double i;
    int celsius;
    cin>>fstrt>>fend>>w;
    i=fstrt;
    while(i<=fend)
    {   
	    celsius=((5*(i-32)))/9;
        cout<<i<<"\t"<<celsius<<endl;  
        i=i+w;    
    } 
}
