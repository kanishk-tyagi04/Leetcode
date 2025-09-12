#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<double>dp(101,0.0);
        dp[0]=poured;
        
        for(int row=0;row<query_row;row++){
            vector<double>next(101,0.0);
            for(int coln=0;coln<=row;coln++){
                if(dp[coln]>1.0){
                    double excess=(dp[coln]-1.0)/2.0;
                    next[coln] += excess;
                    next[coln+1] += excess;
                }
            }
            dp=next;
        }
        return min(1.0,dp[query_glass]);
    }
};