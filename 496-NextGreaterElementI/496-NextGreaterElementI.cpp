// Last updated: 10/3/2025, 12:19:52 AM
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int num : nums1){
            int id=find(nums2.begin(),nums2.end(),num)-nums2.begin();
            int ng=-1;
            for(int i=id+1;i<nums2.size();i++){
                if(nums2[i]>num){
                    ng=nums2[i];
                    break;
               }                
            }
            ans.push_back(ng);

        }

        return ans;
    }
};