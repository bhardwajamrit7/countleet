// Last updated: 10/10/2025, 9:50:43 PM
class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        int mx=INT_MIN;
        vector<int>dp(n);
        for(int i=n-1;i>=0;i--){
           if(i+k<n){
            dp[i]=energy[i]+dp[i+k];
           }
           else{
            dp[i]=energy[i];
           }
            mx=max(mx,dp[i]);
        }
        return mx;
    }
};