import java.lang.*;
import java.io.*;
import java.util.*;

class SumArrEle{
    public static void main (String[] args) {
		int a,s,ele,Sum=0;
		Scanner sc=new Scanner(System.in);
		a=sc.nextInt();
		long some[]=new long[a];
		for(int i=0;i<a;i++)
		{
		    s=sc.nextInt();
		    int arr[]=new int[s];
		    for(int j=0;j<s;j++)
		    {
		        arr[j]=sc.nextInt();
		    }
		    for(int k=0;k<arr.length;k++)
		    {
		        Sum+=arr[k];  
		    }
		    some[i]=Sum;
            System.out.println(some[i]);
		}
	}
}

