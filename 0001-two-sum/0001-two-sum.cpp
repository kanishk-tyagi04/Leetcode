class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>um;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]=i;
        }
        
        for(int i=0;i<nums.size();i++){
        int b=nums[i];
        int a=target-b;
            if(um.find(a)!=um.end() && um[a] != i){
                return{um[a], i};
                break;
            }

        }
        return {-1,-1};
    }
};