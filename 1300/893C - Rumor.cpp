/*

    Author: kunalavghade
    Date: 30-03-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

long long minCost(int u, vector<vector<int>>& g, vector<int>& a, vector<bool>& visited) {
    visited[u] = true;
    long long cost = a[u];
    for (int v : g[u]) 
        if (!visited[v]) 
            cost = min(cost, minCost(v, g, a, visited));
    return cost;
}

void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];    
    vector<vector<int>> g(n);
    while(c--) {
        int x,  y;
        cin >> x >> y;
        g[x-1].push_back(y-1);
        g[y-1].push_back(x-1);
    }
    vector<bool> visited(n, false);
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        if (!visited[i]) {
            ans += minCost(i, g, a, visited);
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}

