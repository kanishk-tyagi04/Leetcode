class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>um;
        for(int num:nums1){
            um[num]++;
        }
        vector<int>result;
        for(int i=0;i<nums2.size();i++){
            if (um.find(nums2[i]) != um.end() && um[nums2[i]] > 0) {
                result.push_back(nums2[i]);
                um[nums2[i]]--;
            }
        }
        return result;
    }
};