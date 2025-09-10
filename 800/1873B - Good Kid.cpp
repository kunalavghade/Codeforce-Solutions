#include "bits/stdc++.h"
using namespace std;

void goodKidPresent() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    
    a[0]++;
    int ans = 1;
    for(int x: a)
        ans *= x;

    cout << ans << "\n";
}

void solve() {
    int n;
    cin >> n;
    while (n--)
        goodKidPresent();
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}