class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.begin());
        int n=strs.size();
        string first=strs[0];
        string second=strs[n-1];
        for(int i=0;i<min(first.size(),second.size());i++){
            if(first[i]!=second[i]){
                return ans;
            }
            ans += first[i];
        }
        return ans;
    }
};