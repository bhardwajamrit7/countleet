// Last updated: 10/8/2025, 12:12:44 AM
class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n=rains.size();
        map<int,int>mp;// to store is the lake empty 
        set<int>s; //to store zeroth idx
        vector<int>ans(n,1);

        for(int i=0;i<n;i++){
            int lake=rains[i];
            if(lake==0){
                s.insert(i);
            }
            else{
                ans[i]=-1;
                if(mp.count(lake)){
                    auto it=s.lower_bound(mp[lake]);
                    if(it==s.end()){
                        return {};
                    }

                    int day=*it;
                    ans[day]=lake;
                    s.erase(it);
                }
                mp[lake]=i;
            }
        }
        return ans;
    }
};