// Last updated: 8/26/2025, 9:06:12 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp,mp2;
        
        for(auto c:s)mp[c]++;
        for(auto c:t)mp2[c]++;

        if(mp==mp2) return true;
        else return false;
    }
};