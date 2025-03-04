// https://leetcode.com/problems/n-th-tribonacci-number/
class Solution {
    public:
        int dp[50];
        int rec(int n){
            if(n==0 || n==1){
                return n;
            }
            if(n==2){
                return 1;
            }
            if(dp[n] !=-1){
                return dp[n];
            }
            dp[n] = rec(n-1)+rec(n-2)+rec(n-3);
            return dp[n];
        }
        int tribonacci(int n) {
            memset(dp,-1,sizeof(dp));
            return rec(n);
        }
    };