// Last updated: 6/16/2025, 11:48:15 AM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int  count=0;
        bool space= false;
        for(int i=n-1;i>=0;i--){ 
           if(s[i]!=' ')  space =true;
           if(s[i]!=' '&& space ) count++;
           if(s[i]==' '&& space) break;
        }
        return count;
    }
};