class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int N = nums.size()/2;
        unordered_map<int,int>um;
        for(int num:nums){
            um[num]++;
            if(um[num]==N){
                return num;
            }
        }
        return -1;

    }
};