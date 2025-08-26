#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, h;
    cin >> n >> h;

    int ans = 0;
    while(n--) {
        int x;
        cin >> x;
        ans += x > h ? 2 : 1;
    }
    cout << ans << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}