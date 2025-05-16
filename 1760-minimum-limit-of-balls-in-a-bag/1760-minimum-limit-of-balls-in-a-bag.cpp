class Solution {
public:
    bool isPossible(vector<int>& nums, int maxOperations, int mid){
            int operations=0;
            for(int num:nums){
                if(num>mid){
                    operations += (num-1)/mid;
                }
            }
            return operations<=maxOperations;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int min=1;
        int max= *max_element(nums.begin(), nums.end());

        while(min<max){
            int mid = (max+min)/2;
            if(isPossible(nums, maxOperations, mid)){
                  max=mid;
            }
            else{
                min=mid+1;
            }
        }
        return min;
    }
};