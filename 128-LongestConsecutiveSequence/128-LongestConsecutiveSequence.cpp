// Last updated: 8/21/2025, 4:54:08 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      if(nums.size()==0) return 0;
      unordered_set<int>s(nums.begin(),nums.end());
      int mx=0;  
      for(auto num:s){
        if(s.find(num-1)==s.end()){
            int curr=num;
            int count=1;
            while(s.find(curr+1)!=s.end()){
                curr++;
                count++;
            }
            mx=max(mx,count);
        }
      }
      return mx;
    }
};