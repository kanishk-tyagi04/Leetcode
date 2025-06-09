#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>um; 
        int ans=0,sum=0;;
        um[0]=1;
        for(int i=0;i<nums.size();i++){
            
            sum+=nums[i];
            if(um.find(sum-k)!=um.end()){
                ans += um[sum-k];
            }
            um[sum]++;
        }
        return ans;
    }
};