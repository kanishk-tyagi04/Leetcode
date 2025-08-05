class Solution {
public:
    int maxArea(vector<int>& height) {
     int length=0,width=0;
     int start=0;
     int end=height.size()-1;
     int area=0;
     int max_area=area;
     while(start<end){
        length=min(height[start],height[end]);
          width=end-start;
          area=length*width;
          max_area=max(max_area,area);
          if(height[start]>height[end]){
            end--;
          }
          else{
            start++;
          }
     }
      return max_area;
    }
};