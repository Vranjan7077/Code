//https://www.hackerrank.com/challenges/repeated-string/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string string;
    long long n,count = 0,remainder,repeat,remCnt = 0;
    cin >> string;
    cin >> n;
    long long len = string.length();
    remainder = n%len;
    repeat = n/len;
    for(int i = 0; i < len; i++)
	{
        if(string[i] == 'a')count++;
        if(string[i] == 'a' && i < remainder)remCnt++;
    }
    cout << (count*repeat)+remCnt << endl;
    return 0;
}
