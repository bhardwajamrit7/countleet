// Last updated: 10/29/2025, 9:05:24 PM
class Solution {
   bool check(int x){
        if(x==1) return true;
        if(x==0|| x%2!=0)return false;
       return  check(x/2);
   }

public:
    int smallestNumber(int n) {
        while(n){
            if(check(n+1)){
                return n;
                break;
            }
            n++;
        }
        return -1;
    }
};