class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>um;
        for(int num:nums){
            um[num]+=1;
        }
        for(auto& pair:um){
            if(pair.second==1){
                return pair.first;
            }
        }
        return -1;
    }
};