// Last updated: 8/23/2025, 12:01:06 AM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
       vector<int>ans(n);
        int j=0;
       for(int i=0;i<n;i++){
        if(nums[i]>=0){
            ans[j]=nums[i];
            j+=2;
        }
       }
       int k=1;
        for(int l=0;l<n;l++){
            if(nums[l]<0){
                ans[k]=nums[l];
                 k+=2;
            }
           
        }
        return ans;
    }
};