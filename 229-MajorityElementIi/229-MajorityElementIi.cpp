// Last updated: 6/16/2025, 11:47:22 AM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=0;
        int ans1=INT_MAX/2,ans2=INT_MAX/2;
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(c1==0 && nums[i]!=ans2){
                c1=1;
                ans1=nums[i];
            }
            else if(c2==0 && nums[i]!=ans1){
                c2=1,ans2=nums[i];
            }
            else if(nums[i]==ans1){
                c1++;
            }
            else if(nums[i]==ans2){
                c2++;
            }
            else{
                c1--;
                c2--;
            }
            
        }
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ans1)  count1++;
            if(nums[i]==ans2)  count2++;
        }
        if(count1>(n/3)) ans.push_back(ans1);
        if(count2>(n/3)) ans.push_back(ans2);
         return ans.empty() ? vector<int>{} : ans;

        }
};