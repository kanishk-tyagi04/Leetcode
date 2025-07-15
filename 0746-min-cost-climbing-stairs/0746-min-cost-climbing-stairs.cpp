class Solution {
public:
    int helper(vector<int>&dp, vector<int>&cost, int n){
        if(n<=1) return 0;
        if(dp[n]!= -1){
            return dp[n];
        }
        return dp[n]=min(cost[n-1]+helper(dp, cost, n-1), cost[n-2]+helper(dp, cost, n-2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        vector<int>dp(n+1, -1);
        int ans = helper(dp, cost, n);
        return ans;
    }
};