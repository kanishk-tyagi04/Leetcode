#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto& f : flights) {
            adj[f[0]].push_back({f[1], f[2]});
        }

        queue<tuple<int, int, int>> q;
        q.push({src, 0, 0});

        vector<int> dist(n, INT_MAX);
        dist[src] = 0;

        while (!q.empty()) {
            auto [u, cost, stops] = q.front();
            q.pop();

            if (stops > K) continue;

            for (auto& [v, price] : adj[u]) {

                if (cost + price < dist[v]) {
                    dist[v] = cost + price;
                    q.push({v, dist[v], stops + 1});
                }
            }
        }

        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};
