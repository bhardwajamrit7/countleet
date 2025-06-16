// Last updated: 6/16/2025, 11:47:48 AM
class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int n=prices.size();
        int cp=prices[0];
        int pr = 0;
        for(int i=1;i<n;i++){
            if (prices[i]< cp){
                cp=prices[i];

            }
            else if (prices[i]-(cp) > pr){
                pr =  prices[i] -cp;
                }
               
            }
            return pr;
        }
};
       
      