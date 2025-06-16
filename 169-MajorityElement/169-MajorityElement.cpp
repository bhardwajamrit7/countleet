// Last updated: 6/16/2025, 11:47:37 AM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                c=1;
                ans=nums[i];
            }
            else if(nums[i]==ans)
            {
                c++;
            }
            else{
                c--;
            }
        }

        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ans) count++;
        }
        if(count>(nums.size())/2) return ans;
        else return -1;
    }
};