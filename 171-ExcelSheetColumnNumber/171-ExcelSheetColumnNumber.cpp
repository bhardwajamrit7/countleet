// Last updated: 6/16/2025, 11:47:35 AM
class Solution {
public:
    int sum=0;
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        for(int i=0;i<n;i++){
            sum=sum*26+((columnTitle[i]-'A')+1);
           
        }
        return sum;
    }
};