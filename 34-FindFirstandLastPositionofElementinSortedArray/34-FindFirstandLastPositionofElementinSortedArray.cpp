// Last updated: 7/1/2025, 9:40:47 AM
class Solution {
public:


    int LowerBound(vector<int>&nums,int target){
        int n=nums.size();
        int low=0;
        int ans1=-1;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans1=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans1;
    }
        int UpperBound(vector<int>&nums,int target){
        int n=nums.size();
        int low=0;
        int ans1=-1;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans1=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans1;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int first=LowerBound(nums,target);
        int last=UpperBound(nums,target);
        ans.push_back(first);
        ans.push_back(last);

        return ans;
        
    }
};