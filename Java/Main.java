package com.abhishek;

import java.util.Arrays;
public class Main {

    public static void main(String[] args) {
	int[] arr = {3};
    bubble(arr);
        System.out.println(Arrays.toString(arr));
    }
    static void bubble(int[] arr){
        boolean swapped;
//        run the steps n-1 times
        for (int i = 0; i < arr.length; i++) {
            swapped = false;
//            for each step, max item will come at the last respective index.
            for (int j = 1; j < arr.length - i; j++) {
//                swap if the item smaller than the previous item
                if(arr[j]<arr[j-1]){
                    int tmp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = tmp;
                    swapped = true;
                }
            }
//            if you didn't swap for a particular value of i ,
//            it mens the array is sorted. Hence, stop the program.
            if(!swapped){
                break;
            }
        }
    }
}
