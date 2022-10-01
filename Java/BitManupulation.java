import java.util.*;    

public class BitManupulation {
    
    public static void checkNSet(int n, int position){
        // int mask = (1 << position);
        if((n & (1<<position) ) != 0){
            System.out.println("Set bit present");
        }
        else{
            System.out.println("Not Present");
        }
    }

    public static void lastSigniBit(int num){
        System.out.println(num & ( num- 1) ) ;
    }

    public static void isRaiseTo2(int num){
        if(( num & (num-1)) ==0 ){
        System.out.println("Number is power of 2") ;
        }else{
            System.out.println("NOT power of 2");
        }
    }

    public static void countOf1(int num){
        int count = 0;
        while (num != 0){
            if((num & 1) == 1){
                count++;
            }
            num = num >> 1;
        }
        System.out.println("1s: " + count);
    }
    public static int numSetBits(long a) {
        if(a == 0 ){
            return 0;
        }else{
            return (int) (a & 1) + numSetBits(a >> 1);
        }

	}

    public static long reverse(long a) {
        long rev = 0;
        
        for(int i = 0; i<32; i++){
            // int bit = ((a >> i) & 1);
            // rev = rev | (bit << (31-i));
        }
        return rev;
	}
    

    public static int getCount(int n){
        int count = 0;
        while(n!=0){
            n = (n & (n-1));
            count++;
        }
        return count;
    }
    
    public static void cntBits(ArrayList<Integer> A) {
        
        int difference = 0;
        
        for(int i = 0 ;i< A.size(); i++){
            for(int j = i; j<A.size();j++){
                
                int xor = A.get(i) ^ A.get(j);
                int count = getCount(xor);

                difference += 2 * count;
                // System.out.println("i: "+A.get(i) + " j: " + A.get(j) + " xor: " + xor + " count:  " + count);
                
            }
        
        }
        System.out.println(difference);
    }

    public static void noRepeating(ArrayList<Integer> A){
        // Get all the values which are non repeating whch others are repeating twice
        // 1st get the xor or all the values
        int xor = 0;
        int a = 0;
        int b = 0;
        
        for(int i = 0; i< A.size(); i++){
            xor = xor ^ A.get(i);
        }
        // Here our xor contains both the number
        // Get all the number whose unit place contains 0 i.e even number
        
        // Get all the number whose unit place contains 1 i.e ODD number
        
    }

    public static int singleNumber(final List<Integer> A) {
        int xor = 0;
        for(int i = 0; i< A.size(); i++){
            xor = xor ^ A.get(i);
        }
        
        int number = xor;
        
        int count = 0;
        while(number > 0){
            if((number&1) == 1){
                break;
            }
            count++;
            number = number>>1;
        }
            
        int xor1 = 0;
        int xor2 = 0;
        
        // for(int i = 0; i< A.size(); i++){
        //     if(A.get(i) & (1<<count)){
        //         xor1 = xor1 ^ A.get(i);
        //     }else{   
        //         xor2 = xor2 ^ A.get(i);
        //     }
        // }
        return xor1;
    }

    public static void subset(int[] array){
        List<Integer> list = new ArrayList<>();
        for(int i = 0; i < (1 << array.length)-1; i++){
            for(int bit = 0; bit< array.length; bit++){
                list.add(array[bit]);
            }
        }
        for(int i = 0; i< list.size(); i++){
            System.out.println(i);
        }
    }

    public static int findMinXor(ArrayList<Integer> A) {
       int min_xor = Integer.MAX_VALUE;
       for(int i  = 0; i< A.size() - 1; i++){
          for(int j  = 0; j < A.size(); j++){
            
          }
        } 

       return min_xor;
    }

    public static int findMinXor2(ArrayList<Integer> A) {
       int min_xor = Integer.MAX_VALUE;
       Collections.sort(A);
       for(int i  = 0; i< A.size() - 1; i++){
          
        min_xor = Math.min(min_xor,A.get(i) ^ A.get(i+1));
          
       } 
       return min_xor;
    }

    public static int totalSetBits(int n){
        int count = 0;
        
        for(int i = 1; i<= n; i++){
            // System.out.println("i: " + i);
            count  = count + countBits(i);
        }
        return count;
    }

    public static int countBits(int n){
        if ( n <= 0 ) 
            return 0;
        return (n%2 == 0 ? 0: 1) + countBits(n/2);
    }

    public static int getPalindrome(int n){

        int last; // To store the last number
        int palindrome = 0; // To store the sum till current iteration aka stores the palindrome number
        while(n > 0){
            last = n % 10;
            palindrome = (palindrome * 10) + last;
            n = n / 10;
        }
        return palindrome;
    }

    // public static int solve(int A) {

    // }

    public static void subarray(ArrayList<Integer> A){
        for(int i = 0; i < A.size(); i++){
            for(int j =i ; j < A.size(); j++){
                for(int k = i; k<=j;k++){
                    System.out.println(A.get(k) + " ");
                }
            }
        }
    }


    public static void main(String[] args) {
        
        // extractIthBit(13,4);
        // lastSigniBit(11);
        // isRaiseTo2(16);
        // countOf1(3);
        // System.out.println(numSetBits(12));
        // System.out.println(reverse(3));

        ArrayList<Integer> array = new ArrayList<>();
        array.add(1);
        array.add(2);
        array.add(3);
        // array.add(10);
        // array.add(2);
        // array.add(1);
        // array.add(1);
        // array.add(3);
        // array.add(5);
        // array.add(3);
        // array.add(4);
        // cntBits(array);
        
        // int[] array = {1,2,3};
        // subset(array);        
        // System.out.println(findMinXor(array));
        // System.out.println(totalSetBits(15));

        // System.out.println(getPalindrome(123456789));
        subarray(array);


    }
}
