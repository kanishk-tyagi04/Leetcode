class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right = height.size()-1;
        int currArea=0, maxArea=0;
        int length=0;
        while(left<right){
            length = min(height[left], height[right]);
            int breadth=right-left;
            currArea=length*breadth;
            maxArea=max(currArea, maxArea);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};