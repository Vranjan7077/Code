#include<iostream>
#include<stack>
using namespace std;
int main()
{
		string s;
		cin>>s;
		stack<char> st;
		int count=0;
		if(s.length()&1)
		{
				cout<<"-1";
		}
		else
		{
				for(int i=0;i<s.length();i++)
				{
						if(s[i]=='}')
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
				cout<<final1;
		}	
}
