class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result(2, -1); 
        int n =nums.size();

        int left = 0,right = n - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        if (left < n && nums[left] == target) {
            result[0] = left;
        }

        left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        if (right >= 0 && nums[right] == target) {
            result[1] = right;
        }

        return result;
    }
};
