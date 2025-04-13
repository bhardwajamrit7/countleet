// Last updated: 4/13/2025, 5:09:49 PM
class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.length() == 0){
            return p.length() == s.length();
        }

        if(p.length() > 1 && p[1] == '*'){
            char cur = p[0];

            int index = 0;
            while(index < s.length() && (cur == '.' || cur == s[index])){
                index++;
            }

            for(int i = 0; i <= index; i++){
                if(isMatch(s.substr(i), p.substr(2))){
                    return true;
                }
            }

            return false;

        }

        if(s.length() == 0) return false;

        if(p[0] == '.'){
            return isMatch(s.substr(1), p.substr(1));
        }

        if(p[0] == s[0]){
            return isMatch(s.substr(1), p.substr(1));
        }

        return false;
    }
};