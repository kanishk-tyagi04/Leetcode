class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>um;
        for(int num: nums){
            um[num]++;
        }
        vector<int>result;
        for(auto &pair:um){
            if(pair.second>1){
                result.push_back(pair.first);
            }
        }
        return result;
    }
};