// Last updated: 6/16/2025, 11:46:48 AM
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count=0;
        for(int c: s){
            if(c=='(')
            {

                st.push(c);
            }
            else
            {
               if (!st.empty()){
                st.pop();
               }
               else{
                count++;
               }
            }
        }
        return st.size()+count;
    }
};