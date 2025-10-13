// Last updated: 10/13/2025, 9:29:11 PM
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;
        string str="";
        for(auto &w:words){
            string orgW=w;
            sort(orgW.begin(),orgW .end());
            if(str!=orgW){
                ans.push_back(w);
                str=orgW;
            }
        }
        return ans;
    }
};