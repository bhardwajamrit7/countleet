// Last updated: 6/16/2025, 11:47:08 AM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0,l=s.size()-1;
        while(st<l){
            char s2=s[st];
            s[st]=s[l];
            s[l]=s2;


            // swap(s[st],s[l]);
            st++;
            l--;
        }
    }
};