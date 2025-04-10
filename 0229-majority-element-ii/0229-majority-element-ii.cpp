class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int count = 1;

        for(int i = 1 ; i < n ; i++)
        {
            if(nums[i] == nums[i - 1])
            {
                count++;
            }
            else
            {
                if(count > n/3)
                {
                    res.push_back(nums[i - 1]);
                }
                count = 1;
            }
        }
        if(count > n / 3)
        {
            res.push_back(nums[n - 1]);
        }
        return res;
    }
};