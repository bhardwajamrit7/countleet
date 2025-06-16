// Last updated: 6/16/2025, 11:47:19 AM
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int mx=max(s.size(),t.size());
       if(s==t) return true;
       else return false;
    }
};