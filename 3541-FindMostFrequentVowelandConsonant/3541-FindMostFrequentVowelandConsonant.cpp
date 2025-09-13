// Last updated: 9/13/2025, 10:59:26 AM
class Solution {
public:
    int maxFreqSum(string s) {
        int v=0;
        int cons=0;
        string vs="aeiouAEIOU";
        map<char,int>mpV;
        map<char,int>mpC;
        for(auto c:s){
            if(vs.find(c)!=string::npos){
                mpV[c]++;
            }
            else{
                mpC[c]++;
            }
        }
        int f1=0;
        for(auto &it:mpV){
            if(it.second>f1){
                f1=it.second;
            }
        }
        int f2=0;
        for(auto &it:mpC){
            if(it.second>f2){
                f2=it.second;
            }
        }

        return f1+f2;


    }
};