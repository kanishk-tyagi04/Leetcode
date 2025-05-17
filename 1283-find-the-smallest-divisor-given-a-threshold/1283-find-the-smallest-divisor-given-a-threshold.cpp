class Solution {
public:
    int isPossible(vector<int>nums,int threshold,int divisor){
        int sum=0;
        for(int num:nums){
            sum+=num/divisor;
            if(num%divisor!=0){
                sum++;
            }
        }
        return sum<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int min=1;
        int max=*max_element(nums.begin(),nums.end());
        while(min<max){
            int mid=min+(max-min)/2;
            if(isPossible(nums,threshold,mid)){
                max=mid;
            }
            else{
                min=mid+1;
            }
        }
        return max;
    }
};