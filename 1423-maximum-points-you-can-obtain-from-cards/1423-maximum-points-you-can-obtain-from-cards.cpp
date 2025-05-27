#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxScore(vector<int>&cardPoints, int k){
        int check_sum = accumulate(cardPoints.begin(), cardPoints.begin()+k,0);
        int i = k - 1;
        int j = cardPoints.size()-1;
        if(cardPoints.size()==k) return check_sum;
        int max_sum = check_sum;
         while(i>=0){
             check_sum += cardPoints[j] - cardPoints[i];
             j--;
             i--;
             max_sum = max(max_sum, check_sum);
         }
         return max_sum;
    }
};