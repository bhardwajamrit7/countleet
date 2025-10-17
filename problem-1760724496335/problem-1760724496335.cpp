// Last updated: 10/17/2025, 11:38:16 PM
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string S;
    int K;
    vector<unordered_map<int,int>> memo[2];  // memo[canChange][i][mask] -> value

    int dfs(int i, int mask, int canChange) {
        if (i == (int)S.size()) return 0;
        auto &mp = memo[canChange][i];
        if (mp.count(mask)) return mp[mask];

        int bit = 1 << (S[i] - 'a');
        int newMask = mask | bit;
        int res;
        if (__builtin_popcount(newMask) > K)
            res = 1 + dfs(i + 1, bit, canChange);
        else
            res = dfs(i + 1, newMask, canChange);

        if (canChange) {
            for (int c = 0; c < 26; ++c) {
                int m2 = mask | (1 << c);
                if (__builtin_popcount(m2) > K)
                    res = max(res, 1 + dfs(i + 1, 1 << c, 0));
                else
                    res = max(res, dfs(i + 1, m2, 0));
            }
        }
        return mp[mask] = res;
    }

    int maxPartitionsAfterOperations(string s, int k) {
        S = move(s);
        K = k;
        int n = S.size();
        memo[0].assign(n + 1, {});
        memo[1].assign(n + 1, {});
        return dfs(0, 0, 1) + 1;
    }
};
