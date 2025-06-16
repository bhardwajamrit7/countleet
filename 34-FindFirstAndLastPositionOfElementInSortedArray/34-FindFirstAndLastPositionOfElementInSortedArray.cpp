// Last updated: 6/16/2025, 11:48:31 AM
class Solution {
public:
    int lower_bound(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        int ans = arr.size();
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int upper_bound(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        int ans = arr.size();
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] > target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lower_bound(nums, target);
        if (lb == n || nums[lb] != target) return { -1, -1 };
        int ub = upper_bound(nums, target);
        return { lb, ub - 1 };
    }
};
