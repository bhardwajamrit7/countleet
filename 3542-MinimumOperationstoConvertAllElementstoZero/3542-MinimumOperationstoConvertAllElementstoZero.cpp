// Last updated: 11/10/2025, 10:41:30 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int> stack;
        int res = 0;
        for (int num : nums) {
            while (!stack.empty() && stack.back() > num)
                stack.pop_back();
            
            if (num == 0)
                continue;
            if (stack.empty() || stack.back() < num) {
                res++;
                stack.push_back(num);
            }
        }
        return res;
    }
};