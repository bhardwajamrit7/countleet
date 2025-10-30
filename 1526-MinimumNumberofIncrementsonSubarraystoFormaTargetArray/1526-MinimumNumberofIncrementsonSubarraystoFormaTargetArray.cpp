// Last updated: 10/30/2025, 11:37:07 PM
class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int sum = target[0]; // start with first element
        for (int i = 1; i < target.size(); i++) {
            if (target[i] > target[i - 1]) {
                sum += target[i] - target[i - 1]; // add only when value increases
            }
        }
        return sum; // total operations needed
    }
};
