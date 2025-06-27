class Solution {
public:
    void bfs(vector<vector<int>>& isConnected, vector<int> &vis, queue<int> &q, int i, int n){
        q.push(i);
        vis[i]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int j=0; j<n; j++){
                if(isConnected[node][j]==1 && vis[j]==0){
                    q.push(j);
                    vis[j]=1;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> vis(n,0);
        queue<int> q;
        int cnt=0;
        for(int i=0; i<vis.size(); i++){
            if(vis[i]==0){
                bfs(isConnected, vis, q, i, n);
                cnt+=1;
            }
        }
        return cnt;
    }
};