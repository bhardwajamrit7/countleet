// Last updated: 11/14/2025, 9:52:19 PM
class Solution {
public:
    int maxOperations(string s) {
        int ones = 0, res = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1')
                ones++;
            else if ((i > 0) && s[i - 1] == '1')
                res += ones;
        }

        return res;
    }
};