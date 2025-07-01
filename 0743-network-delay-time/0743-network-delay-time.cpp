class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k){
        vector<pair<int,int>> adj[n+1];
        for (auto& it : times){
            int u = it[0],
            v = it[1],
            w = it[2];
            adj[u].push_back({v, w});
        }
        vector<int> dis(n + 1,INT_MAX);
        dis[k] = 0;
        priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int,int>>> pq;
        pq.push({0, k});

        while (!pq.empty()) {
            auto [time, u] = pq.top();
            pq.pop();

            for (auto& [v,wt] : adj[u]) {
                if (dis[v]>time+wt) {
                    dis[v]=time+wt;
                    pq.push({dis[v],v});
                }
            }
        }

        int maxtime = *max_element(dis.begin() + 1, dis.end());
        return (maxtime == INT_MAX) ? -1 : maxtime;
    }
};

