#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
       map<int,vector<int>>um;
       vector<int>result;
       if(mat.size()==1 && mat[0].size()==1) return {mat[0][0]};

       for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
              um[i+j].push_back(mat[i][j]);
        }
       }
    for(auto& pair: um){
        if(pair.first%2==0){
        reverse(pair.second.begin(), pair.second.end());
        }
    }    
    for(auto& pair: um){
        result.insert(result.end(), pair.second.begin(), pair.second.end());
    }          
   return result;
    }
};