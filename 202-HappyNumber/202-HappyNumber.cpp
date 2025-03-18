class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>cycle;
        while(n!=1 && cycle.find(n)==cycle.end()){
           cycle.insert(n);
           int sum=0;
        while(n>0){
            int d=n%10;
            sum=sum+d*d;
            n/=10;
        }
        n=sum;

        }
        return n==1;
    }
};