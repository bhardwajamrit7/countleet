// Last updated: 8/31/2025, 9:31:33 PM
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor== -1){
            return INT_MAX;
        }
        bool neg=(dividend<0)^(divisor<0);
        long long x = dividend;
        long long y = divisor;

        x=(x<0)?-x:x;
        y=(y<0) ?-y:y;

        long long int res=0;
        while(x>=y){
            long long temp=y,mul=1;
            while(x>=(temp<<1)){
                temp <<=1;
                mul<<=1; 
            }
            x-=temp;
            res+=mul;
        }
        if (neg)res= -res;
        if(res>INT_MAX) return INT_MAX;
        if(res<INT_MIN) return INT_MIN;

        return (int)res;

        return neg ? -res : res;
    }
};