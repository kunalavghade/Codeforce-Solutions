#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];
   
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++) 
        cin >> b[i];
   
    
    sort(begin(a), end(a));

    for(auto x: b) {
        auto ptr = upper_bound(begin(a), end(a), x) - begin(a);
        cout << ptr << "\n";
    }
   
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