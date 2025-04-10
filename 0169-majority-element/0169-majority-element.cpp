#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>um;
        for(int num:nums){
            um[num]++;
        }
        int n=nums.size();
        int k=n/2;
        for(auto &pair:um){
            if(pair.second>k){
                return pair.first;
                break;
            }
        }
        return -1;
    }
};