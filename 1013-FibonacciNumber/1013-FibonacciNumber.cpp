// Last updated: 6/16/2025, 11:46:46 AM
// class Solution {
// public:
//     int fibo(int n,vector<int>& dp){
//         if(n<=1) return n;
//         if(dp[n]!=-1) return dp[n];
//         else{
//             return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
//         }
//     }
//     int fib(int n) {
//         vector<int>dp(n+1,-1);
//         return fibo(n,dp);
//     }
// };

// class Solution{
//     public:
//     int fib(int n){
//         int pp=0,p=1;
//         int cur=0;
//         if(n<=1) return n;
//         for(int i=2;i<=n;i++){
//             cur=p+pp;
//             pp=p;
//             p=cur;
//         }
//         return cur;
//     }
// };
class Solution{
    public:
    int fib(int n){
        vector<int>dp(n+1,-1);
        if(n<=1) return n;

        dp[0]=0;dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};