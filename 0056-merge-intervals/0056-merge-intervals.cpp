class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        
        sort(inter.begin(),inter.end());
        
        int n = inter.size();
        
        vector<vector<int>> ans;


        vector<int> temp = inter[0];

        for(int i=0;i<n;i++){

            if(temp[1] >= inter[i][0]){
                temp[1] = max(temp[1], inter[i][1]);
            }
            else{
                ans.push_back(temp);
                temp = inter[i];
            }

        }

        ans.push_back(temp);

        return ans;
        
    }
};