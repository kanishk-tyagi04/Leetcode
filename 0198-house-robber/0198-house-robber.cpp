// class Solution {
// public:
// int helper(int n,vector<int>&nums, vector<int>&dp){
//     if(n<=0) return 0;
//    if(dp[n]!=-1){
//     return dp[n];
//    }
//    return dp[n]=max(helper(n-1,nums,dp),helper(n-2,nums,dp)+nums[n-1]);
// }
//     int rob(vector<int>& nums) 
//     {
//         int n = nums.size();
//         vector<int> dp (n+1, -1);

//         return helper(n, nums, dp);
//     }
// };
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
        vector<int>dp(n+1,-1);
        return helper(0,nums,dp);
    }
};