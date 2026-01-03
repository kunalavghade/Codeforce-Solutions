#include "bits/stdc++.h"
using namespace std;

void getRoom(vector<long long> &r, long long x) {
    int l = 0, h = r.size()-1;
    int ans = -1;

    while (l <= h) {
        int m = l + (h - l) / 2;
        if (r[m] >= x) {
            ans = m;
            h = m - 1;
        } else {
            l = m + 1;
        }
    }

    long long prev = (ans == 0 ? 0 : r[ans - 1]);
    cout << ans + 1 << " " << (x - prev) << "\n";
}

int solve() {
    int n, m;
    cin >> n >> m;
    vector<long long> d(n), letter(m);
    for(int i = 0 ; i < n; i++) cin >> d[i]; 
    for(int i = 1 ; i < n; i++) d[i] += d[i-1]; 
    for(int i = 0 ; i < m; i++) cin >> letter[i];
    for(auto x: letter) 
        getRoom(d, x);
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n = 1;
    // cin >> n;
    while(n-- ) {
       int ans = solve();
    //    cout<< ans << "\n";
    }
    
    return 0;
}