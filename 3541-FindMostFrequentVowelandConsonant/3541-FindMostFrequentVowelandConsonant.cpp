// Last updated: 9/13/2025, 11:08:44 AM
class Solution {
public:
    int maxFreqSum(string s) {
        int v=0;
        int cons=0;
        string vs="aeiouAEIOU";
        map<char,int>mpV;
        // map<char,int>mpC;
        for(auto c:s){
           mpV[c]++;
           cout<<mpV[c]<<" ";
        }
        int f1=0,f2=0;
        for(auto &it:mpV){
            if((vs.find(it.first)!=string::npos)){
                cout<<it.first<<" "<<it.second<<endl;
                if(it.second>f1)
                    f1=it.second;
            }
            else if(it.second>f2){
                f2=it.second;
            }
        }
        // int f2=0;
        // for(auto &it:mpC){
        //     if(it.second>f2){
        //         f2=it.second;
        //     }
        // }

        return f1+f2;


    }
};