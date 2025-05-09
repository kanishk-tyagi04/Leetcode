class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        int sum=0;
        int mindiff= INT_MAX;
        int currdiff=0;
        int temp=0;
       for(int i=0;i<n-2;i++){
            int j = i + 1;
            int k = n - 1;
            while(j<k){
                 sum= nums[i] + nums[j] + nums[k];
                 currdiff=abs(target-sum);
                 if (currdiff < mindiff) {
                    mindiff = currdiff;
                    temp = sum;
                }
                if(sum==target){
                    return sum;
                    break;
                }
                if (sum > target) {
                    k--;
                } else {
                    j++;
                }
            }
           
       }
       return temp;
    }
};