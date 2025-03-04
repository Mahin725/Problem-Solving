class Solution {
    public:
        int dp[50];
        int rec(int n)
        {
            if(n==0 || n==1){
                return n;
            }
            if(dp[n]!=-1){
                return dp[n];
            }
            dp[n] = rec(n-1)+rec(n-2);
            return dp[n];
        }
        int fib(int n) {
            memset(dp,-1,sizeof(dp));
            return rec(n);
           
        }
    };