import java.util.*;
import java.lang.*;
import java.io.*;
class ReverseString{
    public static void main (String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int i=sc.nextInt();
	    while(i!=0)
	    {
	        String s=sc.next();
	        StringBuilder sb=new StringBuilder(s);
	        sb=sb.reverse();
	        System.out.println(sb);
	        i--;
	    }
	}
}
