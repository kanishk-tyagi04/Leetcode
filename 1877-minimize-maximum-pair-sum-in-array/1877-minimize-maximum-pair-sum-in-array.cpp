class Solution {
public:
    int minPairSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<int>result;
       int n=nums.size();
       for(int i=0;i<nums.size();i++){
       result.push_back(nums[i]+nums[n-1-i]);
    }
    return *max_element(result.begin(),result.end());
    }
};