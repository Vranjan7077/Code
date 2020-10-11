import java.util.*;
import java.lang.*;
import java.io.*;
class PalindString{
    public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int f=0;
		 int n=sc.nextInt();
		 String s=sc.next();
		 for(int i=0,j=n-1;i<=j;i++,j--){
		     if(s.charAt(i)!=s.charAt(j)){
		         f=1;
		         break;
		     }
		 }
		 if(f==0){
		     System.out.println("Yes");
		 }
		 else
		     System.out.println("No");
		}
	}
}


/*  
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
	    int te;
	   cin >> te;
	    string str;
	    cin >> str;
	    int i=0;
	    int j=str.length()-1;
	    while(i<j)
	    {
	        if(str[i]!=str[j])
	            {
	                cout << "No" << endl;
	                goto l1;
	            }
	            i++;
	            j--;
	    }
	    cout << "Yes" << endl;
	    l1:
	        continue;
	}
	return 0;
}
*/

