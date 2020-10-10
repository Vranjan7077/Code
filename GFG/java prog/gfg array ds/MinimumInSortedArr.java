import java.util.*;
import java.lang.*;

class MinimumInSortedArr{
    public static int min(int arr[],int high,int low){
        while(low < high){
            int mid=low+(high-low)/2;
            if(arr[mid]==arr[high])
                high--;
            else if(arr[mid]>arr[high])
                low=mid+1;
            else
                high=mid;
        }
        return arr[high];
    }
    public static void main(String args[])  
    {  
        int arr1[] = { 5, 6, 1, 2, 3, 4 };  
        int n1 = arr1.length;  
        System.out.println("The minimum element is " +  min(arr1, 0, n1 - 1));  
        
    } 
}