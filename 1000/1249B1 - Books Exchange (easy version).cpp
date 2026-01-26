#include "bits/stdc++.h"
using namespace std;



int solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        a[i]--;
    }

    vector<int> vis(n,0);
    vector<int> ans(n, 0);
    for(int i = 0; i < n; i++) {
        if(vis[i]) continue;
        int cur = i;
        vector<int> cycle;
        while(!vis[cur]) {
            vis[cur] = 1;
            cycle.push_back(cur);
            cur = a[cur];
        }
        for(int j : cycle) 
            ans[j] = cycle.size();
    }
    for(int i : ans) 
        cout<<i<<" ";
    cout<<endl;
   
   return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    cin >> n;
    while (n--) {
        int ans = solve();
        // cout<<ans<<endl;
    }

    return 0;
}
