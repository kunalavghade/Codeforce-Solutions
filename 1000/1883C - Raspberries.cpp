#include "bits/stdc++.h"
using namespace std;



void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    int cnt2 = 0; 

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) cnt2++;
    }
   
    int ans = k; 
    for(int x: a) {
        int rem = (k - x % k) % k;
        ans = min(ans, rem);
    }

    if (k == 4) {
        int needed = max(0, 2 - cnt2);
        ans = min(ans, needed);
    }
   
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}