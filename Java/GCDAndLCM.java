import java.lang.*;
public class GCDAndLCM {
    public static int findGCD(int firstNumber,int secondNumber) {
        if(firstNumber<secondNumber){
            int temp=secondNumber;
            secondNumber=firstNumber;
            firstNumber=temp;
        }
        if(secondNumber==0)
            return firstNumber;

        return findGCD(secondNumber,firstNumber%secondNumber);
    }
    public static void main(String[] args) {
        int firstNumber=16;
        int secondNumber=8;
        int GCD=findGCD(firstNumber,secondNumber);
        int LCM=firstNumber*secondNumber/GCD;
        System.out.printf("GCD=%d & LCM=%d",GCD,LCM);
    }
}