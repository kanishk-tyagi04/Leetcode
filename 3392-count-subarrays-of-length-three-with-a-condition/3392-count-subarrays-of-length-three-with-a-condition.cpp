class Solution {
public:
    bool isPossible(vector<int>&subarray){

        if((subarray[0]+subarray[2])*2==(subarray[1])){
          return true;
        }
        return false;
    }
    int countSubarrays(vector<int>& nums) {
        vector<int>subarray(3);
        if (nums.size() < 3) return 0;
        for(int i=0;i<3;i++){
            subarray[i]=nums[i];
        }
        int count=0;
        if(isPossible(subarray)){
            count++;
        }
        for(int i=3;i<nums.size();i++){
            subarray[0]=subarray[1];
            subarray[1]=subarray[2];
            subarray[2]=nums[i];
           if(isPossible(subarray)){
            count++;
        }
        }
        return count;
    }
};