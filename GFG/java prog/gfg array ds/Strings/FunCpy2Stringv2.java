//Recursive
class FunCpy2Stringv2{
    static void copy(char s1[],char s2[],int index){
        s2[index]=s1[index];
        if(index==s1.length-1){
            return;
        }
        copy(s1,s2,index+1);
    }
    public static void main (String[]args){
        char s1[]="VINAYJMI".toCharArray();
        char s2[]=new char[s1.length];
        int index=0;
        copy(s1,s2,index);
        System.out.println(String.valueOf(s2));
    }
}