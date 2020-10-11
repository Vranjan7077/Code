import java.util.*;
import java.lang.*;
class ArrSplit{
    public static void  splitA(int arr[],int n,int k){
        for(int i=0;i<k;i++){
            int x=arr[0];
            for(int j=0;j<n-1;++j)
                arr[j]=arr[j+1];
                arr[n-1]=x;
        }
    }
    public static void main(String[]args){
        int arr[]={5,5,12,10,6,77};
        int n=arr.length;
        int position=2;
        splitA(arr,6,position);
        for (int i=0;i<n;++i)
        System.out.print(arr[i]+" ");
    }
}