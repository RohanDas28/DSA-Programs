package com.abhishek;

import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
	int[] arr = {3,2,653,23,4};
    selection(arr);
        System.out.println(Arrays.toString(arr));
    }

    static void selection(int[] arr){
        for (int i=0; i < arr.length;i++){
//            find the max item in the remaining array and swap with correct index.
            int last =arr.length-i-1;
//            this will return the index of the largest number of the array. Here we are passing
//            1st element and the last element of the array.
            int maxIndex=  getMaxIndex(arr,0,last);
//            swapping the two element, largest indexed element n our last element.
            swap(arr,maxIndex,last);
        }
    }
    static int getMaxIndex(int[] arr, int start, int end){
//        Here we have assumed that the highest element is at the start.
        int max = start;
        for (int i = start; i <= end; i++) {
            if(arr[max] < arr[i]){
                max = i;
            }
        }
        return max;
    }
    static void swap (int[] arr, int first , int second){
        int temp = arr[first];
        arr[first]  = arr[second];
        arr[second] = temp;
    }
}
