class Solution {
public:
    vector<vector<int>>result;
    void helper(vector<int>& nums, int i, vector<int>& subset) {
        if (i==nums.size()) {
            result.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        helper(nums,i + 1,subset);
        subset.pop_back();
        helper(nums,i + 1,subset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subset;
        helper(nums,0,subset);
        return result;
    }
};
