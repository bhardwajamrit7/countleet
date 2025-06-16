// Last updated: 6/16/2025, 11:48:08 AM
class Solution {
public:
    int countsp(int n,vector<int>&dp){
       if(n<=3){
        return n;

       }
       if(dp[n]!=-1) return dp[n];
       else{
        dp[n]=countsp(n-1,dp)+countsp(n-2,dp);
       }
        
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);

        return countsp(n,dp);
    }
};