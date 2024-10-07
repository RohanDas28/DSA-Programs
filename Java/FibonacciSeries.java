import java.util.*;
public class Fibonacci {
    public static List<Integer> generateFibonacci(int numberSeries) {
        List<Integer> fibonacciArray = new ArrayList<>();
        fibonacciArray.add(0);
        fibonacciArray.add(1);
        if (numberSeries > 2) {
            for (int i = 2; i < numberSeries; i++) {
                fibonacciArray.add(fibonacciArray.get(i - 2) + fibonacciArray.get(i - 1));
            }
        }
        return fibonacciArray;
    }

    public static void main(String[] args) {
        int numberSeries=3;
        System.out.print("Fibonacci Series [");
        List<Integer> fibonacciSeries=generateFibonacci(numberSeries);
        for(int i=0;i<numberSeries-1;i++)
            System.out.print(fibonacciSeries.get(i)+",");
        System.out.print(fibonacciSeries.get(fibonacciSeries.size()-1)+"]");
    }
}
