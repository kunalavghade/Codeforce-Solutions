/*

    Author: kunalavghade
    Date: 15-03-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<long long> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    map<pair<long long,long long>, int> mp;
    int alwaysZero = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {

        if (a[i] == 0) {
            if (b[i] == 0) alwaysZero++;
            continue;
        }

        long long num = -b[i];
        long long den = a[i];

        long long g = gcd(abs(num), abs(den));
        num /= g;
        den /= g;

        if (den < 0) {
            den *= -1;
            num *= -1;
        }

        ans = max(ans, ++mp[{num, den}]);
    }

    cout << ans + alwaysZero << "\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

