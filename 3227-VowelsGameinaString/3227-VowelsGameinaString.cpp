// Last updated: 9/12/2025, 1:16:15 PM
class Solution {
public:
    bool checkVowels(char c){
        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        else return false;
    }
    bool doesAliceWin(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(checkVowels(s[i])){
                // count++;
                return true;
            }
        }
        // if(count==0) return false;
        // if(count%2!=0) return true;

        // if(count%2==0){
        //      return true;
        // }

        return false;
        
    }
};