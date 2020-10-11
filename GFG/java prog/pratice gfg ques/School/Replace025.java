import java.util.*;
public class Replace025 { 
	static int replace(int num) 
	{ 
		return num += calValue(num); 
	} 
	private static int calValue(int num) 
	{ 
		int res = 0; 
		int deci= 1; 
		if (num == 0) { 
			res += (5 * deci); 
		} 
		while (num > 0) { 
			if (num % 10 == 0) 
				res += (5 * deci); 
			num /= 10; 
			deci *= 10; 
		} 
		return res; 
	} 
	public static void main(String[] args) 
	{ 
		Scanner sc= new Scanner(System.in);   
		System.out.print("Enter number:");  
		int a= sc.nextInt(); 
		System.out.print(replace(a)); 
	} 
} 
