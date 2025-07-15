class Solution {
    int memoization(int i,int j,string& text1,string& text2,vector<vector<int>>& dp){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(text1[i]==text2[j]) return dp[i][j]=1+memoization(i-1,j-1,text1,text2,dp);
        else return dp[i][j]=max(memoization(i-1,j,text1,text2,dp),memoization(i,j-1,text1,text2,dp));
    }
public:
    int longestPalindromeSubseq(string s) {
        string r=s;
        int n=s.size();
        reverse(r.begin(),r.end());
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return memoization(n-1,n-1,s,r,dp);
    }
};