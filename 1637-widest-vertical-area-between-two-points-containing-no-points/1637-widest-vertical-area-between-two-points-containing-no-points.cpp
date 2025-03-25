class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>nums;
        for(int i=0;i<points.size();i++){
            nums.push_back(points[i][0]);
        }
        sort(nums.begin(), nums.end());
        reverse(nums.begin(),nums.end());
        int width=0,maxWidth=0;
        for(int i=0;i<nums.size();i++){
            if((i+1)<nums.size()){
             width=(nums[i]-nums[i+1]);
             maxWidth=max(width,maxWidth);
        }
        }
        return maxWidth;
    }
};