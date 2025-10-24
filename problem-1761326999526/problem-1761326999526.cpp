// Last updated: 10/24/2025, 10:59:59 PM
class Solution {
    bool isBalanced(int n) {
        int cnt[10] = {};
        while (n) {
            int d = n % 10;
            if (d == 0) return false;
            cnt[d]++;
            n /= 10;
        }
        for (int i = 1; i < 10; ++i)
            if (cnt[i] && cnt[i] != i) return false;
        return true;
    }
public:
    int nextBeautifulNumber(int n) {
        while (true) {
            if (isBalanced(++n)) return n;
        }
    }
};
