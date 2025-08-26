// Last updated: 8/26/2025, 10:19:28 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq(26,0);

        for(auto c:s) freq[c-'a']++;
        for(auto c:t) freq[c-'a']--;

        for(auto c:freq){
            if(c!=0)return false;
        }
        return true;
    }
};