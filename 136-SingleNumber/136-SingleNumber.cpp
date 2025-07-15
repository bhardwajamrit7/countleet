// Last updated: 7/15/2025, 2:59:08 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> s;
        for (int num : nums) {
            if (s.find(num) == s.end())
                s.insert(num);
            else
                s.erase(num);
        }
        return *s.begin();
    }
};
