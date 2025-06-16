// Last updated: 6/16/2025, 11:49:10 AM
class Solution {
    bool checkPal(string &s,int low,int high)
    {
    int n=s.size();
       while(low<=high){
        if(s[low]!=s[high])
        return false;
        low++;
        high--;
       } 
       return true;
    }
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int mxlen=1;
        int st=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(checkPal(s,i,j)&& (j-i+1)>mxlen){
                    st=i;mxlen=j-i+1;
                }
            }
        }
        return s.substr(st,mxlen);
    }
       
};