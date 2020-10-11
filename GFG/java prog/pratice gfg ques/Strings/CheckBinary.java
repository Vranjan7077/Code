import java.util.*;
class CheckBinary{
    public static void main(String args[]){
        Scanner value=new Scanner(System.in);
        int A=value.nextInt();
        value.nextLine();
        while(A>0){
            String str=value.nextLine();
            Binary b=new Binary();
            boolean a=b.isBinary(str);
            if(a== true)
                System.out.println(1);
            else
                System.out.println(0);
            A--;
        }
    }
}
class Binary{
    boolean isBinary(String str){
        int l=str.length();
        for(int i=0;i<l;i++){
            if(str.charAt(i)!='0' && str.charAt(i)!='1')
                return false;
            }
        return true;
	}
}
