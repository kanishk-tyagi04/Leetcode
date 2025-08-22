class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        int s = nums.size();
        int count = 0;

        if(s>1 && nums[0]== 0 && nums[1] ==0){
            nums[0]=1;
            count++;
        } else if(s==1 && nums[0]==0) { 
            count++;
        }

        if(s>1 && nums[s-1]==0 && nums[s-2]==0){
            nums[s-1]=1;
            count++;
        }

        for(int i=0;i<s-2;i++){
            if(nums[i] == 0 && nums[i+1] == 0 && nums[i+2] == 0){
                nums[i+1] = 1;
                count++;
            }
        }

        return count >= n;
    }
};
