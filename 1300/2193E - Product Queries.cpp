#include "bits/stdc++.h"
using namespace std;



void solve() {
    long long n;
    cin >> n;
    set<int> st;
    vector<int>  dp(n+1, INT_MAX);
    for (int i = 0, x; i < n; i++) {
       cin >> x;
       st.insert(x);
    }

    for(int x: st) dp[x] = 1;

    for(int i = 1; i <= n; i++) {
        if(dp[i] == INT_MAX) continue;

        for(int x: st) {
          if( 1LL * i * x > n) break;
          dp[i*x] = min(dp[i*x], dp[i]+1);
        }

    }
    
    for (int i = 1; i <= n; i++) 
        cout << (dp[i] == INT_MAX ? -1 : dp[i]) << " ";
    
    cout << endl;
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