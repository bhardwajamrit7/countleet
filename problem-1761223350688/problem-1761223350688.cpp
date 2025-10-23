// Last updated: 10/23/2025, 6:12:30 PM
class Solution {
public:
    bool hasSameDigits(string s) {
        int n=s.size();
        // bool cor=false;
        while(n>2){
            // string str="";
            for(int i=0;i<n-1;i++){
                s[i]=(((s[i]-'0') + (s[i+1]-'0'))%10)+'0';
            }
            n--;
        }
        return s[0]==s[1];
    }
};