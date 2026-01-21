#include "bits/stdc++.h"
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> p(n+1, 0), c(n+1, 0);
    for(int i = 2; i <= n; i++)
        cin >> p[i];
    for(int i = 1; i <= n; i++)
        cin >> c[i];
    
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        int pi = p[i];
        int pci = pi == 0 ? 0 : c[pi];
        if(pci != c[i])
            ans++;
        
    }
    cout << ans << '\n';
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
