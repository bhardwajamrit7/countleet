// Last updated: 6/16/2025, 11:48:02 AM
class Solution {
    void fun(vector<int>&a,int id,vector<int>&v,vector<vector<int>>&ans){
        int n=a.size();
        if(id==n){
            ans.push_back(v);
            return ;
        }
        fun(a,id+1,v,ans);
        v.push_back(a[id]);
        fun(a,id+1,v,ans);
        v.pop_back();
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        int id=0;
        fun(nums,id,v,ans);
        return ans;
    }
};