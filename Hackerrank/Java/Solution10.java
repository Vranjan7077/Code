/*
Java Static Initializer Block
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    static Scanner sc= new Scanner(System.in);
    static boolean flag=true;
    static int B=sc.nextInt();
    static int H=sc.nextInt();
    static 
    {
        try
        { 
            int area=B*H;
            //System.out.println(area);
            if(B<=0||H<=0)
            {
                flag=false;
                throw new Exception("");
            }
        }
        catch(Exception e)
        {
            System.out.println("java.lang.Exception: Breadth and height must be positive");
        }
    }
public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}
		
	}//end of main

}//end of class

