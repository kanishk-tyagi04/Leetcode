class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int length=0,width=0,area=0,maxArea=0;
        while(left<right){
         length=min(height[left],height[right]);
         width=right-left;
         area=length*width;
         maxArea=max(maxArea,area);
         if(height[right]>height[left]){
            left++;
         }else{
            right--;
         }
        }
        return maxArea;
    }
};