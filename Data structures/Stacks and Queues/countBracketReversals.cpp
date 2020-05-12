#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int countBracketReversals(char input[])
{
		stack<char> st;
		int count=0;
		int length=strlen(input);
		if(length&1)
		{
				return -1;
		}
		else
		{
				for(int i=0;i<length;i++)
				{
						if(input[i]=='}')
						{
								if(!st.empty())
										st.pop();
								else
										count++;
						}
						else
						{
								st.push('{');
						}
				}
				int final1=0;
				if(count>st.size())
				{
						final1+=st.size();
						count-=st.size();
						final1+=count/2;
				}
				else
						if(count<st.size())
						{
								final1+=count;
								final1+=(st.size()-count)/2;
						}
				else
				{
						final1+=2*count;
				}
				return final1;
		}	
}
int main()
{
		char *c=new char[100000];
		cin>>c;
		int p=countBracketReversals(c);
		cout<<p;

}
