class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(), nums.end());
        reverse(nums.begin(),nums.end());
  
        int i=0;
        while(i<nums.size()){
            if((i+1)<nums.size()){
            sum += min(nums[i],nums[i+1]);
            }
            i=i+2;
        }
        return sum;
    }
};