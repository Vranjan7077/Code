/*
Java Output Formatting
Java's System.out.printf function can be used to print formatted output. The purpose of this exercise is to test your understanding of formatting output using printf.

To get you started, a portion of the solution is provided for you in the editor; you must format and print the input to complete the solution.

Input Format

Every line of input will contain a String followed by an integer. 
Each String will have a maximum of  alphabetic characters, and each integer will be in the inclusive range from  to .

Output Format

In each line of output there should be two columns: 
The first column contains the String and is left justified using exactly  characters. 
The second column contains the integer, expressed in exactly  digits; if the original input has less than three digits, you must pad your output's leading digits with zeroes.

Sample Input

java 100
cpp 65
python 50
Sample Output

================================
java           100 
cpp            065 
python         050 
================================
*/

import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("================================");
        for(int i=0;i<3;i++)
        {
            String s1=sc.next();
            int x=sc.nextInt();
            System.out.printf("%-15s%03d%n", s1, x);
        }
        System.out.println("================================");
    }
}



/*
There are only two formatters here: 
"%-15s%03d%n" 
The one that you think is the third: %n actually represents a linebreak (like hitting Return on your keyboard while typing a sentence).

%s = String        // a string goes here
%d = int (digit)   // an int goes here
%f = float         // a float goes here

Let's look at the whole statement:

("%-15s%03d%n", s1, x)

The two formatters are: 
%-15s which is where the variable s1 (a String) is placed. 
%03d which is where the variable x (an int) is placed.

The other parts of those formatters mean different things...

The -15 part means that: 
-: when s1 is put into this spot, keep it to the left side. 
15: make sure it takes up 15 spaces. 
EXAMPLE if s1 = hi then it will produce:

"hi             "  // Note that the string is 15 characters long
The 03 part means that when x is put into this spot: 
3: it must take up three spaces. 
0: any spaces it doesn't use are to be filled with 0's. 
N.B. The default padder is whitespace " " if 0 is not used. 
EXAMPLE 
if x = 70 then it will produce:

"070"  // The result is 3 characters long, with a '0' filling the unused space
*/