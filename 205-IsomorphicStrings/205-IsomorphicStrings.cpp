// Last updated: 6/16/2025, 11:47:29 AM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
         int n1=s.size();
         int n2=t.size();
         bool valid =true;
         map<char,char>mp1;
        map<char,char>mp2;
         for(int i=0;i<n2;i++){  
          if(mp1.count(s[i])==0){
            mp1[s[i]]=t[i];
          }  
          else if(mp1[s[i]]!=t[i]) {
                valid = false;
            
          }
          if(mp2.count(t[i])==0){
            mp2[t[i]]=s[i];

          }
          else if(mp2[t[i]]!=s[i]){
                valid = false;
            }
         } 
         return valid;
    }
};