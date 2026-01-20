#include "bits/stdc++.h"
using namespace std;


void solve() {
    int n;
    cin >> n;
    int ans = 0;
    long long sum = 0;
    set<long long> s;
    s.insert(0);    
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        sum += x;
        if (s.count(sum)) {
            ans++;
            sum = 0;
            s.clear();
            s.insert(0);
        } else {
            s.insert(sum);
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
