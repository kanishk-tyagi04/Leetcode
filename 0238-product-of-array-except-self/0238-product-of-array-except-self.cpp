class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left_product=1;
        int right_product=1;
        int n=nums.size();
        vector<int>result(n,1);
        for(int i=0;i<n;i++){
           result[i]=left_product;
           left_product*=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            result[i]*=right_product;
            right_product*=nums[i];
        }
        return result;
    }
};