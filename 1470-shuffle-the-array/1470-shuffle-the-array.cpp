class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size=nums.size();
        vector<int>arr(size,0);
        int i=0;
        for(int i=0;i<n;i++){
            arr[2*i]=nums[i];
            arr[2*i+1]=nums[i+n];
        
        }
        return arr;
    }
};