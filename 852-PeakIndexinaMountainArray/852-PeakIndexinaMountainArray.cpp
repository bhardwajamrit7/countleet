// Last updated: 7/1/2025, 10:11:13 AM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int i=0;

        while(i<n-1 && arr[i]<arr[i+1]){
            i++;
         
        }
        return i;
    }
};