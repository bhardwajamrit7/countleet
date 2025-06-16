// Last updated: 6/16/2025, 11:48:35 AM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int n2=needle.length();
        for(int i=0;i<n;i++){
            if(haystack.substr(i,n2)==needle) return i;
        }  
        return -1;
    }
};