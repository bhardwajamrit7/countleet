// Last updated: 6/24/2025, 11:47:01 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int s=0;
        int e=n-1;

        vector<int>ans;
        while(s<e){
            if(numbers[s]+numbers[e]==target){
                ans.push_back(s+1);
                ans.push_back(e+1);
                break;
            }
            else if(numbers[s]+numbers[e]<target){
                s++;
            }
            else{
                e--;
            }
        }
        return ans;
    }
};