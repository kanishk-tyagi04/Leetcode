class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>us;
        for(int num:nums){
            us.insert(num);
        }
        int a=nums.size();
        int b=us.size();
        
        return a!=b;
    }
};