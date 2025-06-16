// Last updated: 6/16/2025, 11:47:06 AM
class Solution {
public:
    string reverseVowels(string s) {
        int st=0,l=s.size()-1;
        string s2;
        while (st < l) {
        if ((s[st] == 'A' || s[st] == 'E' || s[st] == 'I' || s[st] == 'O' || s[st] == 'U' ||  s[st] == 'a' || s[st] == 'e' || s[st] == 'i' || s[st] == 'o' || s[st] == 'u') &&   (s[l] == 'A' || s[l] == 'E' || s[l] == 'I' || s[l] == 'O' || s[l] == 'U' ||  s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u')) {
            swap(s[st], s[l]); 
            st++;
            l--;
        }
        else if (!(s[st] == 'A' || s[st] == 'E' || s[st] == 'I' || s[st] == 'O' || s[st] == 'U' || s[st] == 'a' || s[st] == 'e' || s[st] == 'i' || s[st] == 'o' || s[st] == 'u')) {
            st++;
        }
        else {
            l--;
        }
    }
    return s;
}   
};