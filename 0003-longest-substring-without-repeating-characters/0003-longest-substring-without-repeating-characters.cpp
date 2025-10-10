class Solution{
    public:
    int lengthOfLongestSubstring(string s){
        int start=0,end=0;
        int max_len=0;
        vector<int>temp(128,0);
        for(int end=0;end<s.size();end++){
            char c= s[end];
            start=max(start,temp[c]);
            max_len=max(max_len,end-start+1);
            temp[c]=end+1;
        }
        return max_len;
    }
};