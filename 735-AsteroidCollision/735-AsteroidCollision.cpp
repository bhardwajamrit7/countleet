// Last updated: 6/16/2025, 11:46:55 AM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(asteroids[i]>0)st.push(asteroids[i]);
            if(asteroids[i]<0)
            {
                while((!st.empty())&& (st.top()< -(asteroids[i]))&&(st.top()>=0))
                {
                    st.pop();
                }
                if(st.empty()||st.top()<0){
                    st.push(asteroids[i]);
                }
                else if(st.top()==-asteroids[i]){
                    st.pop();
                }
                }
            }
        vector<int> ans(st.size());
        int ind=st.size()-1;
        while(!st.empty()){
            ans[ind--]=st.top();
            st.pop();
        }
        return ans ; 
    }
};