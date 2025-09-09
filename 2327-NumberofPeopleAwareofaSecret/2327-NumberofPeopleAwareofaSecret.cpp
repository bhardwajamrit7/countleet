// Last updated: 9/9/2025, 9:07:32 PM
class Solution {
public:
    int m=1e9+7;
    vector<int>v;
    int Thatday(int p,int delay, int forget){
        if(p==1) return 1;
        int temp=0;
        if(v[p]!=-1){
            return v[p];
        }
        for(int d=p-forget+1;d<=p-delay;d++){
            if(d>0){
            temp=(temp+Thatday(d,delay,forget))%m;
            }
        }
        return v[p]=temp;
    }
    int peopleAwareOfSecret(int n, int delay, int forget) {
        int ans=0;
        v.assign(n+1,-1);
        for(int i=n-forget+1;i<=n;i++){
            if(i>0){
            ans=(ans+Thatday(i,delay,forget))%m;
            }
        }
        return ans;
    }
};