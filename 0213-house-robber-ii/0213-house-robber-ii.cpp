class Solution{
    public:
    int helper(int i,vector<int>&nums,vector<int>&dp){
        int n=nums.size();
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(helper(i+1,nums,dp),helper(i+2,nums,dp)+nums[i]);
    }
    int rob(vector<int>&nums){
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int>nums1(nums.begin()+1,nums.end()),nums2(nums.begin(),nums.end()-1);
        vector<int>dp1(n,-1),dp2(n,-1);
        return max(helper(0,nums1,dp1),helper(0,nums2,dp2));
    }
};
