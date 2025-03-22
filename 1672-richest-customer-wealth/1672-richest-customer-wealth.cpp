class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int temp=0;
        int maxW=0;
        int rows=accounts.size();
        int colm=accounts[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<colm;j++){
            temp+=accounts[i][j];
            if(j==colm-1){
                maxW=max(maxW,temp);
                temp=0;
            }
        }
        }
       return maxW;
    
    }
};