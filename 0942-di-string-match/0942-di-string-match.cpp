class Solution {
public:
    vector<int> diStringMatch(string s) {
    int n=s.size();
    int i=0;
    int d=n;
    vector<int>ans(n+1);
    for(int j=0;j<n;j++){
        if(s[j]=='I'){
            ans[j]=i;
            i++;
        }
        else{
             ans[j]=d;
             d--;
        }
    } 
    char last=s[n-1];
    ans[n]=last=='D'?d:i;
    return ans;
    }
};