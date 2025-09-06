// Last updated: 9/6/2025, 11:59:54 AM
class Solution {
public:
    #define ll long long
    long long minOperations(vector<vector<int>>& queries) {
       ll ans=0;
       for(auto i:queries){
        ll s=i[0];
        ll e=i[1];

        ll ops=0;

        ll prev=1;
        ll curr=1;

        for(int itr=1;itr<17;itr++){
            if(prev >e) break;

            curr= curr*4;
            ll l=max(s,prev);
            ll r=min(e,curr-1);

            if(r>=l){
                ops+=(r-l+1)*itr;
            }
            prev=curr;
        }
        ans+=(ops+1)/2;
       }
       return ans;

    }
};