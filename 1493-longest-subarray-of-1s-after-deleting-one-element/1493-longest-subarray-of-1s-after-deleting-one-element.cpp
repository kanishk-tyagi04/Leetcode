class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k=1;
        int left=0;
        int deleted=0;
        int max_len=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0) deleted++;
            if(deleted>k){
                if(nums[left]==0) deleted--;
                left++;
            }
          max_len=max(max_len,right-left+1);
        }
    
    return max_len-1;
    }
};