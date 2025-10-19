// Last updated: 10/19/2025, 2:58:10 PM
class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        unordered_set<string> seen;
        queue<string> q;
        string ans = s;

        q.push(s);
        seen.insert(s);

        while (!q.empty()) {
            string cur = q.front();
            q.pop();

            ans = min(ans, cur);

            // Operation 1: add 'a' to odd indices
            string added = cur;
            for (int i = 1; i < added.size(); i += 2) {
                added[i] = ( (added[i] - '0' + a) % 10 ) + '0';
            }
            if (!seen.count(added)) {
                seen.insert(added);
                q.push(added);
            }

            // Operation 2: rotate right by b
            string rotated = cur.substr(cur.size() - b) + cur.substr(0, cur.size() - b);
            if (!seen.count(rotated)) {
                seen.insert(rotated);
                q.push(rotated);
            }
        }

        return ans;
    }
};
