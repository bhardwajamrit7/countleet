// Last updated: 6/16/2025, 11:47:10 AM
class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n==1) return true;
       if(n<=0) return false;
       if(n%4!=0) return false;
       return isPowerOfFour(n/4);
    }
};