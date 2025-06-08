class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int minE= *min_element(nums.begin(),nums.end());
        int n=nums.size();
        return sum-n*minE;
    }
};