// Last updated: 4/16/2025, 9:52:25 AM
class Solution {
public:
   void generateHelper(int open, int close, string current, vector<string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    if (open > 0) generateHelper(open - 1, close, current + "(", result);
    if (close > open) generateHelper(open, close - 1, current + ")", result);
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateHelper(n, n, "", result);
    return result;
}
};