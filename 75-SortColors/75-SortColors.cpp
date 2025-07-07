// Last updated: 7/7/2025, 10:51:05 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int count0=0;
        int count1=0;
        int count2=0;
        for(auto a:nums){
            if(a==0) count0++;
            else if(a==1) count1++;
            else count2++;
        }

        for(int i=0;i<n;i++){
            if(i<count0) nums[i]=0;
            else if(i<count0+count1) nums[i]=1;
            else nums[i]=2;
        }

    }
};