class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();

        int left=0;
        int right=n-1;

        int currA=0, maxA=0;
        while(left<right){
            int length= min(height[left],height[right]);
             int breadth=right-left;
             currA=length*breadth;
             maxA=max(maxA, currA);
             if(height[left]<height[right]){
                left++;
             }
             else{
                right--;
             }
        }
        return maxA;
    }
};