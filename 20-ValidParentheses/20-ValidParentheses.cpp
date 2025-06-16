// Last updated: 6/16/2025, 11:48:49 AM
class Solution {
public:
    bool isValid(string s) {
        char t=s[0];
        if(t==')' ||t=='}'||t==']') return false;
        stack<char>st;
        for(char c:s){
            if(c=='('||c=='{' || c=='['){ 
                st.push(c);
            }else{
                if(!st.empty()){
                    char top=st.top();
                    if((top=='(' && c==')')||(top=='{' && c=='}')|| (top=='[' && c==']')){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};