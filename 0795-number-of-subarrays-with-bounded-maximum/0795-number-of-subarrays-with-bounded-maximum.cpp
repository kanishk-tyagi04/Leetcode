class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int count=0;
        for(int start=0;start<nums.size();start++){
            int maxVal=nums[start];
            for(int end=start;end<nums.size();end++){
                maxVal=max(maxVal, nums[end]);
                if (maxVal >= left && maxVal <= right) {
                    count++;
                }
                if (maxVal > right) break;
            }
        }
        return count;
    }
};