// Last updated: 3/27/2025, 11:06:05 AM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        float mead = 0;
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n = nums1.size();
        if(n % 2 == 0){
            mead= (nums1[n/2] + nums1[(n/2) - 1]) / 2.0;
        }else{
            mead = nums1[n/2];
        }

        return mead;

    }
};