class Solution {
public:
    int helper(int i,vector<int>&nums,vector<int>&dp){
        if(dp[i]!=-1) return dp[i];
        int ans=1;
        for(int j=0;j<i;j++){
            if(nums[j]<nums[i]){
            ans = max(ans, 1+helper(j,nums,dp));
            }
        }
        return dp[i]=ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        int res=1;
        for(int i=0;i<n;i++){
         res =max(res,helper(i,nums,dp));
        }
    

        return res;
    }
};