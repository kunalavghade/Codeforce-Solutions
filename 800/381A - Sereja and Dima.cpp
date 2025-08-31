#include "bits/stdc++.h"
using namespace std;


void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = n-1, p1 = 0, p2 = 0;
    bool turn = true;
    while(l <= r) {
        if(a[l] > a[r]) {
            if(turn) p1 += a[l];
            else p2 += a[l];
            l++;
        } else {
            if(turn) p1 += a[r];
            else p2 += a[r];
            r--;
        }
        turn = !turn;
    }
    cout << p1 << " " << p2 << "\n";
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}