/*
Stocks are profitable
You are given an array and indices of the array represent minutes and data values represent prices of a stock as they were yesterday . You need to figure out and return the maximum profit you can make by buying and selling of the stock. You can buy and sell the stock only once.
Constraints : 1 <= N <= 10^6
Input Format :
Line 1 : An integer N i.e. size of the array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Single integer i.e. Maximum Profit
Sample Input :
 4 
 2 100 150 120
Sample Output : 148
Sample Output Explanation :
Maximum profit can be achieved by buying stock at minute 0 when its price is Rs. 2 and selling it at minute 2 when its price is Rs 150. Hence profit is Rs. (150 - 2) = Rs. 148
*/
int maxProfit(int *arr,int l)
{
	int min=arr[0],maxProfit=0;
	for(int i=0;i<l;i++)
	{
		if(arr[i]<min)
		min=arr[i];
		if((arr[i]-min)>maxProfit)
		maxProfit=arr[i]-min;
	}
	return maxProfit;
}
