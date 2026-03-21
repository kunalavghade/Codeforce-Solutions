/*

    Author: kunalavghade
    Date: 20-03-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

int solve() {
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    sort(begin(a), end(a));

    double mxd = max(a[0], l - a[n - 1]);
    for(int i = 1; i < n; i++) 
        mxd = max(mxd, (a[i] - a[i - 1]) / 2.0);
    
    cout << fixed << setprecision(10) << mxd << endl;
    return mxd;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

