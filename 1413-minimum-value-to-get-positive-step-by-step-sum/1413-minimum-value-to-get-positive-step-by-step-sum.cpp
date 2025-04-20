class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int totalSum=0;
        int minSum=1;
        for(int i=0;i<nums.size();i++){
            totalSum += nums[i];
            minSum=min(minSum,totalSum);
        }
        if(minSum==1){
            return 1;
        }
        return 1-minSum;
    }
};