class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0) return true;
        if(x<0) return false;
        int rev=0;
        int tem=x;
        while(x>0){
            int r=x%10;
            if (rev > (INT_MAX-r)/10) return false;
            rev= rev*10 + r;
            x/=10;
        }
        return rev==tem;
    }

};