class Solution {
public:
    vector<int>parent,rank;
    vector<int>ans;
    int find(int node){
       if(parent[node]==node){
        return node;
       }
       return parent[node]=find(parent[node]);
    }
    bool Union(int x,int y){
        int p_x = find(x);
        int p_y = find(y);
        if(p_x == p_y) return false;

        if(rank[p_x] < rank[p_y]) {
            parent[p_x]=p_y;
        } else if(rank[p_x] > rank[p_y]) {
            parent[p_y] = p_x;
        } else {
            parent[p_y]=p_x;
            rank[p_x]++;
        }
        return true;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    int n=edges.size();
    parent.resize(n+1);
     rank.resize(n+1);
     for(int i=1;i<n;i++){
        parent[i]=i;
     }
     for(auto e:edges){
        bool temp =  Union(e[0],e[1]);
        if(temp==false){
            ans = {e[0],e[1]};
        }
     }
   return ans;
    }
};