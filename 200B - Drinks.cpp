#include <bits/stdc++.h>
using namespace std;    

void solve() {
    int n, t;
    cin >> n;
    int portions = 0, total = 0;

    while(n--) {
        cin >> t;
        portions += t;
        total += 100;
    }
    double ans = (double)portions / total * 100;
    cout<< fixed << setprecision(12) << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

