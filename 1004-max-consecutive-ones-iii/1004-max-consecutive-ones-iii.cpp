class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int flipped_zeroes=0;
        int max_len=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0){
                flipped_zeroes++;
            }
            if(flipped_zeroes>k){
                if(nums[left]==0) flipped_zeroes--;
                left++;
            }
            max_len=max(max_len,right-left+1);
        }
        return max_len;
    }
};