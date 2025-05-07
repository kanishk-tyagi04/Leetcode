class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<long> prefix(n, 0);
        for(int i = 0; i < requests.size(); i++) {
            prefix[requests[i][0]]++;
            if(requests[i][1] < n - 1) {
                prefix[requests[i][1] + 1]--;
            }
        }
        for(int i = 1; i < n; i++) {
            prefix[i] += prefix[i - 1];
        }
        sort(prefix.begin(), prefix.end());
        long maxSum = 0, mod = 1e9 + 7;
        for(int i = n - 1; i >= 0; i--) {
            maxSum = (maxSum + prefix[i] * nums[i]) % mod;
        }
        return (int)maxSum;
    }
};
