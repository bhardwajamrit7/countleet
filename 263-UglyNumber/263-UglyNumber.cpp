class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        if(n==1) return true;

       for(int i=2;i<=5;i++){
        if(i==4) continue;
        while(n%i==0){
            n/=i;
        }
       }
        return n==1;
    }
};