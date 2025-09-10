// Last updated: 9/10/2025, 9:47:29 PM
class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        unordered_set<int>sadUsers;

        for(auto &friends : friendships){
            int u=friends[0]-1;//conver this to 0 base indexing
            int v=friends[1]-1;

            unordered_set<int>Langset(begin(languages[u]),end(languages[u]));

            bool canTalk=false;
            for(auto lang:languages[v]){
                if(Langset.count(lang)){
                    canTalk=true;
                    break;
                }
            }
            if(!canTalk){
                sadUsers.insert(u);
                sadUsers.insert(v);
            }
        }
        //find maximum known language among sad users
        vector<int>language(n+1,0);
        int MostKnownlanguage=0;
        for(int user:sadUsers){
            for(int lang:languages[user]){
                language[lang]++;
                MostKnownlanguage=max(MostKnownlanguage,language[lang]);
            }

        }
        return sadUsers.size()-MostKnownlanguage;
    }
};