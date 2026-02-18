#include "bits/stdc++.h"
using namespace std;


class DSU{
    vector<int> parent;
public:
    DSU(int n) {
        parent.resize(n);
        for(int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    
    int find(int x) {
        if(parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void unify(int x, int y) {
        int px = find(x);
        int py = find(y);
        if(px != py) {
            parent[px] = py;
        }
    }
};

int solve() {
   int m, n;

    cin >> m >> n;
    DSU dsu(n+1);

    vector<bool> lang(n+1, false);
    int ans = 0;
    while(m--) {
        int x;
        cin >> x;
        ans += (!x);
        if(x == 0) continue;
        vector<int> v(x);
        for(int i = 0; i < x; i++) {
            cin >> v[i];
            lang[v[i]] = true;
        }
        for(int i = 0; i < x-1; i++) {
            dsu.unify(v[i], v[i + 1]);
        }
    }

    vector<int> language;
    for(int i = 1; i <= n; i++) 
        if(lang[i]) language.push_back(i);
    
    for(int i = 1; i < language.size(); i++) {
        if(dsu.find(language[i]) != dsu.find(language[i - 1])) {
            ans++;
            dsu.unify(language[i], language[i - 1]);
        }
    }

    cout << ans << endl;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}