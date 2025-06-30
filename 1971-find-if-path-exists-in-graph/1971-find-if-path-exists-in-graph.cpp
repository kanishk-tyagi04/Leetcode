class Solution {
public:
    vector<int> parent;     
    int find(int node) {
        if(parent[node]==node){
            return node;
        }
        return parent[node]=find(parent[node]);
    }    
    void Union(int x,int y) {
        int p_x = find(x) ; 
        int p_y = find(y);
        parent[p_x] = p_y; 
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        parent.resize(n);
        for(int i=0;i<n;i++)
            parent[i] = i; 
            
        for(auto e : edges) {
            Union(e[0] , e[1]); 
        }                         
        return find(source) == find(destination); 
    }
};