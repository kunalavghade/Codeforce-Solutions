#include "bits/stdc++.h"
using namespace std;

struct DSU {
    vector<int> parent, size;

    DSU(int n) {
        parent.resize(n);
        size.assign(n, 1);
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return;
        if (size[x] < size[y]) swap(x, y);
        parent[y] = x;
        size[x] += size[y];
    }
};

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        p[i]--;
    }

    string s;
    cin >> s;

    DSU dsu(n);

    for (int i = 0; i < n; i++) 
        dsu.unite(i, p[i]);

    vector<int> color(n, 0);
    for (int i = 0; i < n; i++) 
        if (s[i] == '0') 
            color[p[i]] = 1;

    unordered_map<int, int> blackCount;
    for (int i = 0; i < n; i++) 
        if (color[i]) 
            blackCount[dsu.find(i)]++;

    for (int i = 0; i < n; i++) 
        cout << blackCount[dsu.find(i)] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
