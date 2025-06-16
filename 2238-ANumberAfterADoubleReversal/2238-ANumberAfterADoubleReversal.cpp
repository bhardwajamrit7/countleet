// Last updated: 6/16/2025, 11:46:25 AM
class Solution {
public:
    bool isSameAfterReversals(int num) {
        int sum=0;
        int tem=num;
        if (num==0) return true;
        while(num!=0){
            int r=num%10;
            sum=sum*10+r;
            num/=10;
        }
        int tem2=sum;
        int revNum=0;

        while(sum!=0)
        {
            int r2=sum%10;
            revNum=revNum*10+r2;
            sum/=10;
        }
        if(revNum==tem) return true;
        else return false;
    }
};