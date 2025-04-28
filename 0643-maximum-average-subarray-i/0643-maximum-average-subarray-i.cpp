#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int a=0;
        int b=k-1;
        int sum=0;
        int n=nums.size();
        
          sum = accumulate(nums.begin(),nums.begin()+k,0);
          double max_avg = (double)sum / k;
         for (int i = k; i < n; i++) {
            sum = sum - nums[i - k] + nums[i]; 
            max_avg = max(max_avg, (double)sum / k);
        }
        return max_avg;
    }
};