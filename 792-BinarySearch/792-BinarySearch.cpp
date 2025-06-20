// Last updated: 6/16/2025, 11:46:52 AM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
       int  low=0,high=n-1;
        while(low<=high){
            int mid=low+ ((high-low)/2);
            if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                return mid;
            }

        }
        return -1;
    }
};