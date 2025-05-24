class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int colns=matrix[0].size();
        int row=0;
        int col=colns-1;
        while(row<rows && col>-1){
            int curr=matrix[row][col];
            if(curr==target) return true;
            else if(curr<target) row++;
            else{
                col--;
            }
        }
        return false;
    }
};