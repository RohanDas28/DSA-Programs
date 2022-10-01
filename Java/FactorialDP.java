import java.util.Arrays;

public class FactorialDP {
    

    public static int recursion(int n){
        if(n==0){
            return 0;
        }
        if(n == 1){
            return 1;
        }

        return recursion(n-2) + recursion(n-1);
    }

    public static int memoization(int n, int[] nums){
        int result = 0;
        if(nums[n] != 0){
            return nums[n];
        }
        if(n==0){
            result  = 0;
        }
        else if(n==1){
            result  = 1;
        }else{
            result =  memoization(n-1,nums) + memoization(n-2, nums);
        }
        nums[n] = result;
        
        return result;
    }

    public static int bottom_up(int n){
        if (n ==1) return 0;
        if (n ==2) return 1;

        int[] nums = new int[n+1];
        Arrays.fill(nums, 0);
        nums[1] = 0;
        nums[2] = 1;

        for(int i  = 3; i < n+1; i++){
            nums[i] = nums[i-1] + nums[i-2];
        }
        return nums[n];
    }

    public static void main(String[] args) {
        int n = 5;
        int[] nums = new int[n +1];
        Arrays.fill(nums, 0);


        System.out.println(recursion(n));
        System.out.println(memoization(n,nums));
        System.out.println(bottom_up(n));
    }
}
