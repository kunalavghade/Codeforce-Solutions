#include <bits/stdc++.h>
using namespace std;    

void solve() {
    long long int n;
    cin >> n;

    // Optimized calculation using formula
    // For n: ans = n/2 if n is even, else ans = ((n/2) - n);
    long long int ans = (n % 2 == 0) ? (n / 2) : ((n/2) - n);
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
