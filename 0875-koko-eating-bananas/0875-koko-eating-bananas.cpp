#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPossible(vector<int>&piles, int h, int mid){
        int ans=0;
        for(int pile:piles){
            ans+=(pile/mid);
            if(pile%mid!=0){
                ans++;
            }
        }
        return ans<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<high){
            int mid=low+(high-low)/2;
            if(isPossible(piles,h,mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};