// Last updated: 8/18/2025, 7:17:47 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0,count=0;
        int n=nums.size();
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
           if(nums[i]==1){
            count++;
            if(i==n-1) return max(mx,count);
           }
           else{
            mx=max(mx,count);
            count=0;
           }
        }
        return mx;
    }
};