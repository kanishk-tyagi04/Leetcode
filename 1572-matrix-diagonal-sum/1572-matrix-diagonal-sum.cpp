class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        int n = mat.size();
        for(int i=0;i<mat.size();i++){
            ans+=mat[i][i];
            ans+=mat[n-1-i][i];
        }
        if(n%2!=0){
            ans -=mat[n/2][n/2];
        }
        return ans;
    }
};