import java.util.*;

class FindEleAfterRotations{
    static int fE(int []arr,int [][]range,int rotation,int index){
        for(int i=rotation-1;i>=0;i--){
            int left=range[i][0];
            int right=range[i][1];
            if(left<=index&&right>=index){
                if(index==left)
                    index=right;
                else
                    index--;
            }
        }
        return arr[index];
    }
    public static void main(String[]args){
        int []arr={1,2,3,4,5,6,7,8,9};
        int rotation=3;
        int [][]range={{0,2},{0,3},{0,4}};
        int index=1;
        System.out.println(fE(arr,range,rotation,index));
    }
}