class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if (find(nums.begin(), nums.end(), 1) == nums.end()) {
            return 1;
        }
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0 || nums[i]>n){
                nums[i]=1;
            }
        }
       for (int i = 0; i < n; i++) {
            int it = abs(nums[i]);  
            if (it <= n && nums[it - 1] > 0) {
                nums[it - 1] = -nums[it - 1];  
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 ){
                return i+1;
            }
            
            
        }
        return n+1;
    }
};