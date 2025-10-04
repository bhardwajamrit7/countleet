// Last updated: 10/5/2025, 12:06:28 AM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int mxarea=0;
        int left=0;
        int right=n-1;

        while(left<right){
            int h=min(height[left],height[right]);
            int  b=right-left;
            int area =h*b;
            mxarea=max(mxarea,area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return mxarea;
    }
};