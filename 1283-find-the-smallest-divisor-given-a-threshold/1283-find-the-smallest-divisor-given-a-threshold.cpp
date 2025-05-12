class Solution {
public:
    bool isPossible(vector<int>& nums, int threshold, int mid){
        for(int num:nums){
            threshold -= num/mid;
            if(num%mid!=0){
                --threshold;
            }
            if(threshold<0) return false;
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int min=1;
        int max=*max_element(nums.begin(), nums.end());
        while(min<max){
            int mid=min+(max-min)/2;
            if(isPossible(nums,threshold,mid)){
                max=mid;
            }
            else{
                min=max+1;
            }
        }
        return max;
    }
};