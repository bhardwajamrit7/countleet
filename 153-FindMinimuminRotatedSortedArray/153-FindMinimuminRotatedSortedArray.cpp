// Last updated: 7/2/2025, 10:43:24 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=nums.size()-1;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[n-1]){   
                low=mid+1;
            }
            else{
               ans=nums[mid];
               high=mid-1;
            }

        }
        return ans;
    }
};