/*
Array sum
Given a n*m binary matrix that is, it contains 0s and 1s only, we need to find and return sum of coverage of all zeros of the input matrix. Coverage for a particular 0 is defined as, total number of ones around a zero (i.e. in left, right, up and bottom directions).
Input format :
Line 1 : n and m (space separated positive integers)
Next n lines : m elements of each row (separated by space).
Output format :
Line 1 : print row number
Constraints :
1 <= n, m <= 10^4
Sample Input 1 :
2 2 
1 0
0 1
Sample Output 1 : 4
*/
int count(int **temp,int i,int j)
{
	int count=0;
	if(temp[i][j-1]==1)
	count++;
	if(temp[i][j+1]==1)
	count++;
	if(temp[i-1][j]==1)
	count++;
	if(temp[i+1][j]==1)
	count++;
	return count;
}
int coverage(int ** arr,int n,int m)
{
	int **temp;
	temp=new int*[n+2];
	int i,j,p=0;
	for(i=0;i<n+2;i++)
	{
		temp[i]=new int[m+2];
	}
	for(i=0;i<n+2;i++)
	for(j=0;j<m+2;j++)
	temp[i][j]=0;
	for(i=0;i<n;i++)
	{
		for(j=0;i<m;j++)
		{
			temp[i+1][j+1]=arr[i][j];
		}
	}
	for(i=1;i<n+1;i++)
	{
		for(j=1;i<m+1;j++)
		{
			if(temp[i][j]==0)
			p=p+count(temp,i,j);
		}
	}
	delete temp;
	return p;
}
