class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool check_first_row=false;
        bool check_first_coln=false;

        for(int i=0;i<n;i++){
          if(matrix[0][i]==0){
            check_first_row=true;
          }
        }
         for(int i=0;i<m;i++){
          if(matrix[i][0]==0){
            check_first_coln=true;
          }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
              if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
              }
            }
        }
               for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
              if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
              }
            }
               }
                for(int i=0;i<n;i++){
                    
            if(check_first_row){
               matrix[0][i]=0;
                }
            }
            for(int i=0;i<m;i++){
            if(check_first_coln){
                
                    matrix[i][0]=0;
                }
            }

        
    }
};