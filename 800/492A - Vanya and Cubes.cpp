/*

    Author: kunalavghade
    Date: 30-03-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
   long long n;
   cin >> n;
   long long cur = 1, ans =0, cnt = 1;
   while(cur <= n) {
        ans++;
        cur += cnt;
        cnt++;
        n-= (cur);
   }
   cout << ans << "\n";
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