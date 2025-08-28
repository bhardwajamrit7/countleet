// Last updated: 8/28/2025, 7:01:30 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int last=n-1;
        int s=0;
        int ans=-1;
        while(s<=last){
            int mid=s+((last-s)/2);

            if(nums[mid]==target){
                ans=mid;
                break;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                last=mid-1;
            }

        }
        return ans;
    }
};