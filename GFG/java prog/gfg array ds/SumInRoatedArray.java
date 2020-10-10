class SumInRoatedArray{
    static boolean SumInRoatedArray(int arr[],int n, int x){
        int i;
        for(i=0;i<n-1;i++)
        if(arr[i]>arr[i+1])
            break;
        int d=(i+1)%n;
        int r=i;
        while(d!=r){
            if(arr[d]+arr[r]==x)
                return true;
            if(arr[d]+arr[r]<x)
                d=(d+1)%n;
            else
                r=(n+r-1)%n;
        }
        return false;
    }
    public static void main(String[]args){
        int arr[]={11,15,6,8,9,10};
        int sum=19;
        int n=arr.length;
        if(SumInRoatedArray(arr,n,sum))
            System.out.print("Array has two elements" + " with sum 19"); 
        else
            System.out.print("Array doesn't have two" + " elements with sum 19 ");  
    }
}