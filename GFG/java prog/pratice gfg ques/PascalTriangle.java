/*
import java.io.*; 
import java.util.*;
class PascalTriangle { 
	static void printPascal(int n) 
	{ 
	    for (int l = 0; l < n; l++) 
        { 
            for (int i = 0; i <= l; i++) 
            System.out.print(binomialCoeff (l, i)+" "); 		
            System.out.println(); 
        } 
	} 
	static int binomialCoeff(int n, int k) { 
		int res = 1; 
		if (k > n - k) 
		k = n - k; 
		for (int i = 0; i < k; ++i) 
		{ 
			res *= (n - i); 
			res /= (i + 1); 
		} 
		return res; 
	} 
	public static void main(String args[]) 
	{ 
        Scanner sc= new Scanner(System.in);   
		System.out.print("Enter number:");  
        int a= sc.nextInt(); 
        printPascal(a); 
	} 
} 
*/

import java.io.*; 
import java.util.*;
class PascalTriangle { 
public static void printPascal(int n) { 
        for(int line = 1; line <= n; line++) 
        { 	
            int C=1;
            for(int i = 1; i <= line; i++) 
            { 
                System.out.print(C+" "); 
                C = C * (line - i) / i; 
            } 
            System.out.println(); 
        } 
    } 
    public static void main (String[] args) 
    { 
        Scanner sc= new Scanner(System.in);   
		System.out.print("Enter number:");  
        int a= sc.nextInt(); 
        printPascal(a); 
    } 
} 

