// Last updated: 6/16/2025, 11:48:28 AM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       // int ind=0;
       int  n=nums.size();
       int low=0,high=n-1;
       while(low<=high){
        int  mid=low+(high-low)/2;
         if(nums[mid]==target){
            return mid;
         }
         else if(nums[mid]<target){
            low=mid+1;
         }
         else{
            high=mid-1;
         }
       }
       return low;
    }
};