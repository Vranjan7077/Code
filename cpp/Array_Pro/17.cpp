/*
Remove Duplicates 
Given a string S, remove consecutive duplicates from it recursively.
Input Format : String S
Output Format : Output string
Constraints : 1 <= Length of String S <= 10^3
Sample Input : aabccba
Sample Output :abcba
*/
#include<iostream>
using namespace std;

void remove(char *input,int newIndex, int index)
{
	if(input[index]=='\0')
	{
		input[newIndex]=input[index-1];
		input[newIndex+1]='\0';
		return;
	}
	if(input[index]==input[index-1])
	{
		remove(input,newIndex,index+1);
		return;
	}
	else
	input[newIndex]=input[index-1];
	remove(input,newIndex+1,index+1);
}
void removeConsecutiveDuplicates(char *input)
{
	remove(input,0,1);
}
