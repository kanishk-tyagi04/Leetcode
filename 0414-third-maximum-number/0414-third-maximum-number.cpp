#include<bits/stdc++.h>
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int>us;
       for(int num:nums){
         us.insert(num);
       }
       vector<int> vec(us.begin(), us.end());
       sort(vec.begin(), vec.end(), greater<int>());
       
       if(vec.size()>=3)  return vec[2];
          
       else{
        return *max_element(vec.begin(),vec.end());
       }
    }
};