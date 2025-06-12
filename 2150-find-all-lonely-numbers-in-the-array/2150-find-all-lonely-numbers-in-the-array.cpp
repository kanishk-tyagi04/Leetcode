class Solution {
public:
    unordered_map<int,int>um;
    bool isValid(int key){
        if(um.find(key+1)==um.end() && um.find(key-1)==um.end() && um[key]==1){
            return true;
        }
        return false;
    }
    vector<int> findLonely(vector<int>& nums) {
        
        vector<int>result;
        for(int num:nums){
            um[num]++;
        }
        for(int i=0;i<nums.size();i++){
            if(isValid(nums[i])){
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};