class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int total_sum= accumulate(nums.begin(), nums.end(), 0);
        int curr_sum=0;
        int i=0;
        int diff=0;
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        vector<int>result;
        while(i<nums.size()){
            curr_sum +=nums[i];
            int rest_sum=total_sum-curr_sum;
            if(curr_sum>rest_sum){
                 for(int j=0;j<=i;j++){
                result.push_back(nums[j]);
                 }
                 break;
            }
            i++;
        }
        return result;
    }
};