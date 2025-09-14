// Last updated: 9/14/2025, 10:37:13 PM
class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    
    string toLowerStr(const string &s) {
        string t = s;
        for (char &c : t) c = tolower(c);
        return t;
    }
    
    string devowel(const string &s) {
        string t = s;
        for (char &c : t) if (isVowel(c)) c = '#';
        return t;
    }
    
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exact;
        unordered_map<string,string> lowerMap;   // lowercase -> first original
        unordered_map<string,string> devowelMap; // devoweled lowercase -> first original
        
        for (auto &w : wordlist) {
            exact.insert(w);
            string lw = toLowerStr(w);
            if (!lowerMap.count(lw)) lowerMap[lw] = w;
            string dw = devowel(lw);
            if (!devowelMap.count(dw)) devowelMap[dw] = w;
        }
        
        vector<string> ans;
        ans.reserve(queries.size());
        
        for (auto &q : queries) {
            if (exact.count(q)) {
                ans.push_back(q);
                continue;
            }
            string lq = toLowerStr(q);
            if (lowerMap.count(lq)) {
                ans.push_back(lowerMap[lq]);
                continue;
            }
            string dq = devowel(lq);
            if (devowelMap.count(dq)) {
                ans.push_back(devowelMap[dq]);
                continue;
            }
            ans.push_back("");
        }
        
        return ans;
    }
};
