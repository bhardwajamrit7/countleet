// Last updated: 6/16/2025, 11:48:55 AM
class Solution {
public:
    int val(char t){
        if(t=='I') return 1;
        if(t=='V') return 5;
        if(t=='X') return 10;
        if(t=='L') return 50;
        if(t=='C') return 100;
        if(t=='D') return 500;
        if(t=='M') return 1000;
        return -1;

    }
    int romanToInt(string s) {
        int n=s.length();
        int res=0;
        for(int i=0;i<n;i++){
            int s1=val(s[i]);

           if(i+1<s.length()){ 
            int s2=val(s[i+1]);

            if(s1>=s2){
                res+=s1;
            }
            else{
                res+=(s2-s1);
                i++;
            }
           }
           else{
            res+=s1;
           }
        }
        return res;
        // int res=0,s1=0;
        // for(int i=n-1;i>0;--i){
        //     int cur=val(s[i]);
        //     res+=cur;
        //     if()
        // }
    }
};