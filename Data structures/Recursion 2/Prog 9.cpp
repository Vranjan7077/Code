/*
Binary Search (Recursive)
Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
Return -1 if x is not present in the given array.
Note : If given array size is even, take first mid.
Input format :
Line 1 : Array size
Line 2 : Array elements (separated by space)
Line 3 : x (element to be searched)
Sample Input :
6
2 3 4 5 6 8 
5 
Sample Output:
3 
*/
int BinarySearch(int arr[],int n,int val)
{
	int start=0,end=n-1;
	int mid;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(val==arr[mid])
		return mid;
		else if(val>arr[mid])
		start=mid+1;
		else if(val<arr[mid])
		end=mid-1;
	}
	return -1;
}

// or this
/*
int binarySearch(int input[], int size, int element)
{
    if(size<=0)
        return -1;
	int mid = (size-1)/2;
	if(mid<size)
	{
		if(input[mid]==element)
			return mid;
		else if(input[mid]<element)
		{
			int ar[size-mid-1];
			for(int i=mid+1;i<size;i++)
			{
				ar[i-(mid+1)] = input[i];
			}
			size = size-mid-1;
            int ans=binarySearch(ar,size,element);
            if(ans==-1)
                return -1;
            else 
                return mid+1+ans;
		}
		else if(input[mid]>element)
		{
			int ar[mid];
			for(int i=0;i<mid;i++)
			{
				ar[i] = input[i];
			}
			size = mid;
            return binarySearch(ar,size,element);
		}
		
	}
	return -1;
}
*/
