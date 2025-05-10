class Solution {
public: 
    bool Helper(vector<int>&subarray, int& start, vector<int>& nums){
          int n=subarray.size();
         for(int i=start;i<=nums.size()-n;i++){
            if(subarray==vector<int>(nums.begin()+i,nums.begin()+i+n)){
                start=i+n;
                return true;
            }
         }
         return false;
         
    }
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        int start=0;
        for(int i=0;i<groups.size();i++){
            if(!Helper(groups[i],start,nums)){
                return false;
            }
        }
        return true;
    }
};