// Last updated: 9/13/2025, 12:47:05 AM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>hashTable(256,-1);
        int n=s.size();
        int l=0,r=0,maxLen=0;
        while(r<n){
            if(hashTable[s[l]]!=-1){
                if(hashTable[s[r]]>=l){
                    l=hashTable[s[r]]+1;
                }
            }
            int len=r-l+1;
            maxLen=max(maxLen,len);
            hashTable[s[r]]=r;
            r++;
        }
        return maxLen;
    }
};