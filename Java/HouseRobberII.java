class Solution 
{
    public int rob(int[] a) 
    {
        // Base Cases
        int n = a.length;
        if(n==1)
            return a[0];
        if(n==2)
            return Math.max(a[0], a[1]);
        
        // DP For i=0 to n-2
        int[] dp = new int[n];
        dp[0] = a[0];
        dp[1] = Math.max(a[0], a[1]);
        for(int i=2; i<n-1; i++)
            dp[i] = Math.max(a[i] + dp[i-2], dp[i-1]);
        int ans = dp[n-2];
        
        // DP For i=n-1 to 1
        dp = new int[n+2];
        for(int i=n-1; i>=1; i--)
            dp[i] = Math.max(a[i] + dp[i+2], dp[i+1]);
        
        // Returning Max of both problems
        return Math.max(ans, dp[1]);
    }
}
