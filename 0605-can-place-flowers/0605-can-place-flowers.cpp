class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
     int s=nums.size();
     int count=0;
     if(nums[0]==0 && nums[1]==0){
        count++;
     }
     if(nums[s-1]==0 && nums[s-2]==0){
        count++;
     }
     for(int i=1;i<s-1;i++){
        if(nums[i-1]+nums[i]+nums[i+1]==0){
            count++;
        }
     }
 return count>=n;
    }
};