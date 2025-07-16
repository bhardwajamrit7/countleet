// Last updated: 7/16/2025, 10:38:56 AM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set<int> s(nums.begin(), nums.end());
        vector<int> vec(s.begin(), s.end());

        int longest = 0;
        int currentStreak = 1;

        for (int i = 1; i < vec.size(); i++) {
            if (vec[i] == vec[i - 1] + 1) {
                currentStreak++;
            } else {
                longest = max(longest, currentStreak);
                currentStreak = 1;
            }
        }

        longest = max(longest, currentStreak);
        return longest;
    }
};
