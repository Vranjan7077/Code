/*
Linear Search
Given a random integer array A and an element x. You need to search this element x in the given array using linear search. Return the index of element in the input.
Linear search means, we need to compare elements from the array A one by one with the element x, till we found the match or we reach the end of array. If match found, return its index, and if not return -1.
Indexing in the array starts from 0.
Input format :
Line 1 : Integer n, Array Size
Line 2 : Array elements (separated by space)
Line 3 : Element to be searched (i.e. x)
Constraints : 1 <= n <= 10^5
Sample Input 1:
7
2 13 4 1 3 6 28
3
Sample Output 1: 4
Sample Input 2:
7
2 13 4 1 3 6 28
9
Sample Output 2: -1
*/
#include <iostream>
using namespace std;
class LS
{
    public:
        void LinearSearch(int arr[], int value, int i, int n)
        {   int found = 0;
            for (i = 0; i < n ; i++)
            {
                if (value == arr[i] )
                {
                    found = 1;
                    break;
                }
            }
            if (found == 1)
            {
                cout<<i;
            }
            else
            {
                cout<<"-1";
            }
        }
};
int  main()
{  
    int num;
    int i,  keynum, found = 0;
    cin>>num;
    int array[num];
    //cout<<"Enter the elements one by one \n";
    for (i = 0; i < num; i++)
    {
        cin>> array[i];
    }
    //cout<<"Enter the element to be searched   ";
    cin>>keynum;
    /*  Linear search begins */
    LS l1;
    l1.LinearSearch(array,keynum,i,num);
    return 0;
}
/*
or...
int linearSearch(int arr[], int n ,int val)
{
    for (int i=0;i<n;i++)
    {
	   if(val==arr[i])
	   return i;
    }
    return -1;
}
*/

