/*
String to Integer
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format : Numeric string (string, Eg. "1234")
Output format : Corresponding integer (int, Eg. 1234)
Sample Input 1 : 1231
Sample Output 1: 1231
Sample Input 2 : 12567
Sample Output 2 : 12567
*/
#include<cstring>
int stringToNumber(char input[])
{
	int k=strlen(input);
	if(input[0]=='\0')
	{
		return 0;
	}
	int a=stringToNumber(input+1);
	int b=input[0]-'0';
	int m=1;
	for(int i=0;i<k-1;i++)
	m*=10;
	b=b*m;
	return b+a;
}
