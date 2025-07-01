// Last updated: 7/1/2025, 10:08:02 AM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size()-1;
        int low=0;
        int high=n-1;
        // int peak=-1;

        while(low<=high){
           int mid=low+(high-low)/2;
            if(arr[mid]<arr[mid+1]){
                low=mid+1;
            }
           else if(arr[mid]<arr[mid-1]){
                high=mid-1;
            }
            else if(arr[mid]>arr[mid+1]){
                return mid;
            }
        }
        return -1;
    }
};