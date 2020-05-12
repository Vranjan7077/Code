/*
Word Break - 1
Given a valid sentence without any spaces between the words and a dictionary of valid English words, find all possible ways to break the sentence in individual dictionary words.
Input Format :
First line contains a single integer n denoting size of dictionary. Subsequent n lines contain words in the dictionary
Next line contains a sentence without spaces
Output Format
Print all the sentences that can be formed each one in a separate line. Order of sentences does not matter. Look into sample testcases.
Constraints :1<=n<=100
Sample Input :
13
mobile
samsung
sam
sung
man
mango
icecream
and
go
i
love
ice
cream
iloveicecreamandmango
Sample Output :
i love ice cream and man go
i love ice cream and mango
i love icecream and man go
i love icecream and mango
*/

#include<iostream>
#define mod 1000000007
#define inf 1000000000000LL
#define root2 1.41421
#define root3 1.73205
#define pi 3.14159
#define MAX 100001
#define cntbit_builtin_popcountll
#define ll long long int
#define PII pair<int , int>
#define f first
#define s second
#define mk make_pair
#define PLL pair<ll,ll>
#define gc getchar
#define pb push_back
using namespace std;
get<string>dict;

void wordbreak(string x, int i,string result)
{
	string s=x.substr(0,i+1);
	int k=x.size();
	if(dict.find(s)!=dict.end())
	{
		if(i<k-1)
		wordbreak(x.substr(i+1,k-1),0,result+s+" ");
		else cout<<(result+s)<<endl;
	}
	if(i<k-1)
	wordbreak(x,i+1,result);	
}
int main()
{
	int n;
	cin>>n;
	string s;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>s;
		dict.insert(s);
	}
	cin>>s;
	wordbreak(s,0,"");
}
