class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        if(n==k) return "0";
        string ans="";
        for(char &ch:num){
            while(ans.length()>0 && k>0 && ans.back()>ch){
                ans.pop_back();
                k--;
            }
            if(ans.length()>0 || ch!='0') ans.push_back(ch);
        }
        while(ans.length()>0 && k>0){
            ans.pop_back();
            k--;
        }
        if(ans=="") return "0";
        return ans;
    }
};