// Last updated: 10/25/2025, 11:14:41 PM
class Solution {
public:
    int totalMoney(int n) {
        int week_s=n/7;
        int day_s=n%7;

        int weeksum=0;
        weeksum=(week_s*(2*28+(week_s-1)*7))/2;
        int dayssum=0;
        dayssum=(day_s*(2*(week_s+1) +(day_s-1)))/2;

        return weeksum+dayssum;
    }
};