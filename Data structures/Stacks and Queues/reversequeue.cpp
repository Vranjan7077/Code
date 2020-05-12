#include<iostream>
#include<queue>
using namespace std;
void reverseQueue(queue<int> &q)
{
		if(q.empty())
				return;
		int t=q.front();
		q.pop();
		reverseQueue(q);
		q.push(t);
}
int main()
{
		int size;
		queue<int> q;
		cin>>size;
		int m;
		for(int i=0;i<size;i++)
		{
				cin>>m;
				q.push(m);
		}
		reverseQueue(q);
		while(!q.empty())
		{
				cout<<q.front()<<" ";
				q.pop();
		}
}
