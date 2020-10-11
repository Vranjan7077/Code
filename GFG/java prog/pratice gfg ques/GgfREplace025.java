// { Driver Code Starts
import java.util.*;
class Replace{
public static void main(String[] args){
	Scanner sc=new Scanner(System.in);
	int t=sc.nextInt();
	while(t-->0){
		int n=sc.nextInt();
		GfG g=new GfG();
		g.convertFive(n);
	}
}
}// } Driver Code Ends


/Complete the function below/
class GfG
{
	public static void convertFive(int n)
	{
        int sum=0,ncount=0,remainder;
        while(n>0){
            remainder=n%10;
            if(remainder==0)
                remainder=5;
            sum=sum*10+remainder;
            n=n/10;
        }
        while(sum>0){
            remainder=sum%10;
            ncount=ncount*10+remainder;
            sum=sum+sum/10;
        }
        System.out.println(ncount);
    }
}