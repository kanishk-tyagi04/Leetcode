class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long start=0,end=0,total=0,max_len=0;
        for(int end=0;end<nums.size();end++){
            total += nums[end];
            while((end-start+1)*(long long)nums[end]-total >k){
                total -= nums[start];
                start++;
            }
            max_len=max(max_len,end-start+1);
        }
        return max_len;
    }
};