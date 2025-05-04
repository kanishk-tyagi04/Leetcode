class Solution {
public:
    int maxProduct(int n) {
        vector<int>nums;
        while(n){
            int digit=n%10;
            nums.push_back(digit);
            n=n/10;
        }
        sort(nums.begin(), nums.end(),greater<int>());
        return nums[0]*nums[1];
    }
};