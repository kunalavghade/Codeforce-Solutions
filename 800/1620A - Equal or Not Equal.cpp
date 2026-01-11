#include "bits/stdc++.h"
using namespace std;


class DSU {
    vector<int> p, s;
    public: 
        DSU(int n) {
            p.resize(n);
            s.resize(n);
            for(int i = 0; i < n; i++) {
                p[i] = i;
                s[i] = 1;
            }
        }

        int find(int x) {
            if(p[x] == x) return x;
            return p[x] = find(p[x]);
        }

        void unite(int x, int y) {
            x = find(x);
            y = find(y);
            if(x == y) return;
            if(s[x] < s[y]) swap(x, y);
            p[y] = x;
            s[x] += s[y];
        }
};

int solve() {
    string s;
    cin >> s;
    int n = s.size();
    DSU dsu(n);
    for(int i = 0; i < n; i++) 
        if(s[i] == 'E') dsu.unite(i, (i + 1) % n);
    
    for(int i = 0; i < n; i++)
        if(s[i] == 'N' && dsu.find(i) == dsu.find((i + 1) % n)) 
            return 0;

   return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    cin >> n;
    while (n--) {
        int ans = solve();
        cout<<(ans ? "YES" : "NO" )<<endl;
    }

    return 0;
}
