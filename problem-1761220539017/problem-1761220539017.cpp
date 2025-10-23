// Last updated: 10/23/2025, 5:25:39 PM
class Solution {
public:
    bool hasSameDigits(string s) {
        // int n=s.size();
        bool cor=false;
        while(s.size()>=2){
            string str="";
            for(int i=1;i<s.size();i++){
                str+=(s[i-1]+s[i])%10;
            }
            if(str.size()==2){
                if(str[0]==str[1]) cor=true;
                break;
            }
            s=str;

        }
        return cor;
    }
};