// Last updated: 6/16/2025, 11:48:57 AM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        int min=strs[0].length();
        for(int i=0;i<n;i++){
            if(min>strs[i].length()){
                min=strs[i].length();
            }
        }
        string res="";
        for(int i=0;i<min;i++){
            if(strs[0][i]==strs[n-1][i])
            res+=strs[0][i];
            else break;
        }
        return res;

    }
};