// Last updated: 6/16/2025, 11:47:38 AM
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        while(columnNumber>0){
            columnNumber--;
            res+=(((columnNumber)%26))+'A';
            columnNumber/=26;
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};