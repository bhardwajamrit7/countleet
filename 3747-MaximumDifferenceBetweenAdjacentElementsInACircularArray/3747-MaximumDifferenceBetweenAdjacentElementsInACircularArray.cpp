// Last updated: 6/16/2025, 11:46:18 AM
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int mx=INT_MIN;
       int n=nums.size();
       for(int i=0;i<n-1;i++){
        int d=abs(nums[i+1]-nums[i]);
        mx=max(mx,d);
       }
      
       return max(mx,abs(nums[0]-nums[n-1]));
    }
};