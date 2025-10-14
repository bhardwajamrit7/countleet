// Last updated: 10/14/2025, 9:01:15 PM
class Solution {
public:
    bool check(vector<int>& nums,int p, int k){
        int end=p+k-1;
            while(p<end){
                if(nums[p]>=nums[p+1]) return false;
                // cout<<nums[p]<<k;
                p++;
            }
            return true;
        }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==2) return true;
        for(int i=0;i<=n-2*k;i++){
            int j = i + k;
            if (j <= n - k && check(nums, i, k) && check(nums, j, k)) {
                return true;
            }

            }

        
        return false;
    }
};