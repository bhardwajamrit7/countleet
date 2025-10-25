// Last updated: 10/25/2025, 10:42:22 PM
class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int round =ceil(n/7.0);
        cout<<round<<" ";

        for(int i=1;i<=round;i++){
            for(int j=i;j<i+7;j++){
                if(n>0){
                    sum+=j;
                    n--;
                }
                else {
                    break;
                }
            }
        }
        return sum;
    }
};