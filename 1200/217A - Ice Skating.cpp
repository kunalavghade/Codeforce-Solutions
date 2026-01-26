#include "bits/stdc++.h"
using namespace std;

void dfs(int u, vector<vector<int>> &g, vector<int> &vis)
{
    vis[u] = 1;
    for(auto it : g[u])
        if(!vis[it])
            dfs(it, g, vis);
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++) 
        cin >> v[i].first >> v[i].second;
    
    vector<vector<int>> g(n);
    
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(v[i].first == v[j].first || v[i].second == v[j].second)
                g[i].push_back(j), g[j].push_back(i);
    
    int ans = 0;
    vector<int> vis(n, 0);
    for(int i = 0; i < n; i++) 
        if(!vis[i]) {
            dfs(i, g, vis);
            ans++;
        }
    cout << ans -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
