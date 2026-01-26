#include "bits/stdc++.h"
using namespace std;


int solve() {
    int n, t;
    cin >> n;
    int ans = INT_MAX;
    while(n--) {
        cin >> t;
       ans = min(ans, abs(t));
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n = 1;
    // cin >> n;
    while(n-- ) {
       int ans = solve();
       cout<< ans << "\n";
    }
    
    return 0;
}