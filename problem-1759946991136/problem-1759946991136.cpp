// Last updated: 10/8/2025, 11:39:51 PM
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
       sort(potions.begin(),potions.end());
       int n=potions.size();
        vector<int>ans;
        for(int spell:spells){
            int count=0;
            
                // long long int prod=(1ll*spells*potions[j]);
                //spells[i]=prod/potions[j]
                //spells[i]*potions[j]>=success
                long long  ss=ceil((double)success/spell);

                int id=lower_bound(potions.begin(),potions.end(),ss)-potions.begin();



            //    if(potions[j]>=ss)
            //         count++;
            
            ans.push_back(n-id);
        }
        return ans;
    }
};

//potions:- 5,8,8  // m=3
//spell=3,1,2
//success=16
//prod :-15,24,24 // 6 6 6    ----6// id=1 // m-id =2
//prod=spell*potion
//prod>=success condition--- spell*potion>=success// success/spell<=potion
//prod=spell*potions
//prod/spell=potion
