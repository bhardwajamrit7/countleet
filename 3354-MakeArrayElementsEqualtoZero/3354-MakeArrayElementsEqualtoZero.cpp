// Last updated: 10/28/2025, 9:44:55 PM
class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n=nums.size();
        int sum=0;

        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int curr=0;
        int res=0;
        for(int i=0;i<n;i++){
            curr+=nums[i];
            
                int left=curr;
                int right=sum-left;
            if(nums[i]!=0){
                continue;
            }

                if(right==left){
                    res+=2;
                }
                if(abs(right-left)==1){
                    res+=1;
                }      
        }
        return res;
    }
};