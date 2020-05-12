#include<iostream>
using namespace std;
int * stockSpan(int *price,int size)
{
		int *result=new int[size];
		result[0]=1;
		for(int i=1;i<size;i++)
		{
				int index=i-1;
				int sum=0;
				while(index>=0&&price[index]<price[i])
				{
						sum+=result[index];
						index=index-result[index];
				}
				result[i]=sum+1;
		}
		return result;
}
int main()
{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
				cin>>a[i];
		int *p=stockSpan(a,n);
		for(int i=0;i<n;i++)
				cout<<p[i]<<" ";
}
