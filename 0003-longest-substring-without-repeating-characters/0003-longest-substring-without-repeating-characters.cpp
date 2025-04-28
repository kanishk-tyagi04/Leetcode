#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int ans=0;
        vector<int>arr(128,0);
        for(int end=0;end<s.size();end++){
            char c =  s[end];
            start = max(start, arr[c]);
            ans = max(ans, end-start+1);
            arr[c]=end+1;
        }
        return ans;

    }
};