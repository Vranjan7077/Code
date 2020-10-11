import java.lang.*;
import java.io.*;
class RemoveVowelString{
    public static void main (String[] args){
	 Scanner in = new Scanner(System.in).useDelimiter("\\n");
	 int t = in.nextInt();
	 for(int z=0;z<t;z++){
            String s = in.next();
            String o ="";
            for(int i=0;i<s.length();i++)
            {
                if(s.charAt(i)=='a' || s.charAt(i)=='e' || s.charAt(i)=='i' || s.charAt(i)=='o' || s.charAt(i)=='u')
                    o+="";
                else
                    o+=s.charAt(i);
            }
            System.out.println(o);
	    }
	 }
}

