// Last updated: 6/16/2025, 11:46:20 AM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>ans;
        double kelvin=celsius+273.15;
        ans.push_back(kelvin);
        double Fahrenheit=(celsius*1.80)+32.00;
        ans.push_back(Fahrenheit);
        return ans;
    }
};