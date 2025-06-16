// Last updated: 6/16/2025, 11:47:04 AM
class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long long i=1;i*i<=num;i++){
            if(i*i==num) return true;
        }
        return false;
    }
};