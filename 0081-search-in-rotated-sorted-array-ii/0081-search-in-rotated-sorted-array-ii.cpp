class Solution {
public:
    bool search(vector<int>& nums, int target) {
        unordered_set<int>us;
        for(int num:nums){
            us.insert(num);
        }
        if(us.find(target)!=0){
            return true;
        }
        return false;
    }
};