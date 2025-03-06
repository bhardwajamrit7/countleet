class Solution {
public:
    int reverse(int x) {
       long long int temp=x;
        long long int rev=0;
        if(x%10==0){
            x/=10;
        }
        while(x!=0){
            long long int digit=x%10;
            rev=rev*10+digit;
            if(rev>INT_MAX || rev<INT_MIN) return 0;
            x/=10;
        }
        return rev;    
    }
};