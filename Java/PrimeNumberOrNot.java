public class PrimeOrNot {

    public static String verifyNumber(int number) {
        if(number <2)
            return "Not Prime";
        else if(number%2==0 && number >2)
            return "Not Prime";
        else
            return "Prime";
    }
    public static void main(String[] args) {
        int findPrimeOrNot=11;
        String statusOfNumber=verifyNumber(findPrimeOrNot);
        System.out.printf("%d is a %s Number",findPrimeOrNot,statusOfNumber);
    }

}