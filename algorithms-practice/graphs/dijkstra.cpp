// Dijkstra's Algorithm (non-negative weights)
// Time: O((n + m) log n) with heap
// Space: O(n)
#include <bits/stdc++.h>
using namespace std;

vector<long long> dijkstra(int n, vector<vector<pair<int,int>>> &adj, int s){
    const long long INF = (1LL<<60);
    vector<long long> dist(n, INF);
    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq;
    dist[s] = 0;
    pq.push({0, s});
    while(!pq.empty()){
        auto [d,u] = pq.top(); pq.pop();
        if (d != dist[u]) continue;
        for (auto [v,w] : adj[u]){
            if (dist[v] > d + w){
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

int main(){
    int n = 5;
    vector<vector<pair<int,int>>> adj(n);
    auto add = [&](int u,int v,int w){ adj[u].push_back({v,w}); adj[v].push_back({u,w}); };
    add(0,1,2); add(1,2,3); add(0,3,6); add(3,4,1); add(2,4,5);
    auto dist = dijkstra(n, adj, 0);
    for (int i=0;i<n;++i) cout << dist[i] << (i+1==n?'\n':' ');
    return 0;
}
