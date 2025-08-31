#include "bits/stdc++.h"
using namespace std;


void solve() {
    int n;
    cin >> n;

    while(n--) {
        int base, ans = 0, cur;
        
        cin >> base >> cur;
        if(cur > base) ans++;
        
        cin >> cur;
        if(cur > base) ans++;

        cin >> cur;
        if(cur > base) ans++;

        cout << ans << endl;

    }

   
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}