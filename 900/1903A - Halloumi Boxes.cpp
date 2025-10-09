#include "bits/stdc++.h"
using namespace std;


bool checkSortable() {
    int n,  k; cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 1; i < n; i++) {
        if((arr[i-1] > arr[i]) && (k == 1)) return false;
    }

    return true;

}

void solve() {
    int n; cin >> n;

    while(n--) {
        bool isSortable = checkSortable();
        cout << (isSortable ? "YES" : "NO") << "\n";
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}