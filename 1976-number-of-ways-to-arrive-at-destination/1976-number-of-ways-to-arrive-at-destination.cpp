class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto&it:roads){
            int 
            u=it[0],
            v=it[1],
            w=it[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        vector<long long>dis(n, LLONG_MAX);
        vector<int>ways(n, 0);
        int mod = 1e9+7;

        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;

        dis[0] = 0;
        ways[0] = 1;
        pq.push({0, 0});

        while (!pq.empty()) {
            auto [time, u] = pq.top();
            pq.pop();

            if (time > dis[u]) continue;

            for (auto& [v, wt] : adj[u]) {
                if (dis[v] > time + wt) {
                    dis[v] = time + wt;
                    ways[v] = ways[u];
                    pq.push({dis[v], v});
                }
                else if (dis[v] == time + wt) {
                    ways[v] = (ways[v] + ways[u]) % mod;
                }
            }
        }

        return ways[n-1] % mod;
    }
};
