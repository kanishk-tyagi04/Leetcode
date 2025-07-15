class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jumplength=0,curr=0;
        int indx=0;

        while(indx<nums.size()){
            curr=nums[indx];
            jumplength=max(jumplength, curr);
            
            if(jumplength==0){
                return false;
                break;
            }
            indx++;
            jumplength--;
        }
        return true;
    }
};