#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int equalSubstring(string s, string t,int maxCost){
        int start=0;
        int end=0;
        int cost = 0;
        int maxlength=0;
        while(end<s.size()){
            cost += abs(s[end] - t[end]);
            while(cost>maxCost){
                cost -= abs(s[start] - t[start]);
                start++;
            }
            maxlength = max(maxlength,end - start + 1);
            end++;
        }
        return maxlength;
    }
};