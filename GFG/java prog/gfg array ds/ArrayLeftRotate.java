import java.util.*;
import java.lang.System;
public class ArrayLeftRotate {
    public static int[] rotateArray(int[] arr, int d){
        int n = arr.length;
        int[] rotated = new int[n]; 
        System.arraycopy(arr, d, rotated, 0, n - d);
        System.arraycopy(arr, 0, rotated, n - d, d);
        return rotated;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int d = scanner.nextInt();
        int[] numbers = new int[n];
        for(int i = 0; i < n; i++){
            numbers[i] = scanner.nextInt();
        }
        scanner.close();
        numbers = rotateArray(numbers, d);
        for(int i : numbers) {
            System.out.print(i + " ");
        }
        System.out.println();
    }        
}





/*  
without extra array:

class Solution {
    public void rotate(int[] arr, int k) {
        int n = arr.length;
        k = k % n;
        reverse(arr, 0, n - 1);
        reverse(arr, 0, k - 1);
        reverse(arr, k, n - 1);
    }
    private void reverse(int[] arr, int l, int h) {
        while (l < h) {
            arr(arr, l++, h--);
        }
    }
    private void swap(int[] nums, int a, int b) {
        int tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp;
    }
}
*/