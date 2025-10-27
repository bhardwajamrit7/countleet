// Last updated: 10/27/2025, 10:42:14 PM
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        vector<int>cnt;
        int prev=0,sum=0;
       for(auto num:bank){
        int count=0;
            for(int i=0;i<num.size();i++){
                if(num[i]=='1')count++;
            }
            if(count>0){
                sum+=prev*count;
                prev=count;
            }
       }

    //    int sum=0;
    //    for(int i=0;i<cnt.size();i++){
    //     if(cnt[i]!=0){
    //         for(int j=i+1;j<cnt.size();j++){
    //             if(cnt[j]!=0){
    //                 sum+=cnt[i]*cnt[j];
    //                 break;
    //             }
    //             else{
    //                 continue;
    //             }
    //         }
    //     }
    //    }
       return sum;
    }
};