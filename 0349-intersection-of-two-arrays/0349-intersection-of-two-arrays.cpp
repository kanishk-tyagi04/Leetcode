class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>us;
        for(int num:nums1){
            us.insert(num);
        }
        vector<int>result;
        for(int i=0;i<nums2.size();i++){
            if(us.find(nums2[i])!=us.end()){
                result.push_back(nums2[i]);
                us.erase(nums2[i]);
            }
        }
        return result;
    }
};