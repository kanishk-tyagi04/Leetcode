class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,max_count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                max_count=max(max_count,count);
                count=0;
            }

        }
        max_count=max(max_count,count);
        return max_count;
    }
};