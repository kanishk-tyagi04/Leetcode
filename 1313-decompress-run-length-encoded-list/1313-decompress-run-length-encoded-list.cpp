class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        unordered_map<int, int> um;
        int n = nums.size();
        
        for (int i = 0; i < n / 2; i++) { 
            int it1 = nums[2 * i];      
            int it2 = nums[2 * i + 1];  
            um[i] = it1;
            while (it1--) {
                result.push_back(it2);
            }
        }

        return result;
    }
};
