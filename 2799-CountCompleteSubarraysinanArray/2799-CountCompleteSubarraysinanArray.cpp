// Last updated: 4/24/2025, 4:44:59 PM
class Solution {
    public:
        int countCompleteSubarrays(vector<int>& nums) {
            int k = unordered_set<int>(nums.begin(),nums.end()).size(), res = 0;
            for (int i = 0; i < nums.size(); i++) {
                unordered_set<int> st;
                for (int j = i; j < nums.size(); j++) {
                    st.insert(nums[j]);
                    if (st.size() == k) res++;
                }
            }
            return res;
        }
    };