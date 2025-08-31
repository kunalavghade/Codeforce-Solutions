#include "bits/stdc++.h"
using namespace std;

void solverRemoveSmallest() {
    int n, t;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 1; i < a.size(); i++) {
        if(a[i]-a[i-1] > 1) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

void solve() {
    int n;
    cin >> n;

    while(n--) {
        solverRemoveSmallest();
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}