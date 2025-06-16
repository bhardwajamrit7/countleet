// Last updated: 6/16/2025, 11:47:44 AM
class Solution {
    bool fun(string &s){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string n = "";
        for(char c : s) if  ((c < 58 || c > 64) && (c < 32 || c > 47) && (c < 91 || c > 96) && (c < 123) && c != 32 )n+=c; 
        cout << n << endl;
        int i = 0;
        int j = n.size()-1;
        while(i<j){
        if(n[i]!=n[j]) return false;
        i++;
        j--;
    }
    return true;
}
public:
    bool isPalindrome(string s) {
        if (s.size() == 1) return true;
      return  fun(s);
    }
};