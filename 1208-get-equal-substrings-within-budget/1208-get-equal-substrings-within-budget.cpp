class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int start=0;
        int end=0;
        int cost=0,len=0;
        while(end<s.size()){
             cost += abs(s[end]-t[end]);
            if(cost>maxCost){
                cost -= abs(s[start]-t[start]);
                start++;
            }
            len=max(len,end-start+1);
            end++;
        }
        return len;
    }
};