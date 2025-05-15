#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     int checkOccurances(vector<int>&nums, int k){
        int count=0;
        for(int i=0;i<nums.size();i++){
             if(nums[i]>=k){
                count++;
             }
        }
        return count;
     }
    int specialArray(vector<int>& nums) {
        int start=0;
        int end =nums.size();
         while (start <= end) {
        int mid = (start + end) / 2;
        int count = checkOccurances(nums, mid);
        
        if (count ==mid) {
            return mid;
        } else if (count > mid) {  
            start = mid + 1;  
        } else {  
            end = mid - 1;
        }
        }
        return -1;
    }
};