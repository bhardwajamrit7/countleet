// Last updated: 10/22/2025, 2:05:18 PM
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        unordered_map<long long,int> count;
        map<long long,int> line;
        set<long long> candidates;
        for (long long num : nums) {
            count[num]++;
            line[num - k] += 1;
            line[num + k + 1] -= 1;
            candidates.insert(num);
            candidates.insert(num - k);
            candidates.insert(num + k + 1);
        }
        int ans = 1;
        long long adjustable = 0;
        for (long long x : candidates) {
            if (line.count(x)) adjustable += line[x];
            int cnt = count.count(x) ? count[x] : 0;
            long long adjusted = adjustable - cnt;
            ans = max(ans, cnt + (int)min<long long>(numOperations, max(0LL, adjusted)));
        }
        return ans;
    }
};
