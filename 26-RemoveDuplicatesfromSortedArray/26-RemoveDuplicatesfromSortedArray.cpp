// Last updated: 9/11/2025, 12:06:53 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int n=nums.size();
        set<int>s;

        // for(int i=0;i<n;i++){num=nums[i]}
        for(auto num:nums){
            s.insert(num);
        }
        nums.clear();
        for(auto num:s){
            nums.push_back(num);
        }
        return nums.size();
    }
};