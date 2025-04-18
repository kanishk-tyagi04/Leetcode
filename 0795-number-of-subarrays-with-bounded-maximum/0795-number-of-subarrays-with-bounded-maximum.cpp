class Solution {
public:
    int countBoundedSubarrays(vector<int>& nums, int bound) {
        int count = 0, curr = 0;
        for (int num : nums) {
            if (num <= bound) {
                curr++;
                count += curr;
            } else {
                curr = 0;
            }
        }
        return count;
    }

    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return countBoundedSubarrays(nums, right) - countBoundedSubarrays(nums, left - 1);
    }
};
