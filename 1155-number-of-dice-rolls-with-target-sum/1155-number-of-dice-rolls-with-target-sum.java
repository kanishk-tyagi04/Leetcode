class Solution {
    public int helper(int n, int k, int target, int[][] dp) {
        // Base condition
        if (n == 0 && target == 0) {
            return 1;
        } else if (n == 0 || target == 0) {
            return 0;
        }

        // Check if the value is already computed
        if (dp[n][target] != -1) {
            return dp[n][target];
        }

        int ans = 0;
        int mod = 1000_000_007;
        for (int face = 1; face <= k; face++) {
            if (target - face >= 0) {
                ans = (ans + helper(n - 1, k, target - face, dp)) % mod;
            }
        }
        return dp[n][target] = ans;
    }

    public int numRollsToTarget(int n, int k, int target) {
        int[][] dp = new int[n + 1][target + 1];
        for (int i = 0; i <= n; i++) {
            Arrays.fill(dp[i], -1);
        }
        return helper(n, k, target, dp);
    }
}