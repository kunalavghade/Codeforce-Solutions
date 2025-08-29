#include <bits/stdc++.h>
using namespace std;    

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1), ans(n+1, 0);
    for (int i = 1; i <= n; ++i) 
        cin >> a[i];
    
    for(int i = 1; i <= n; ++i) 
        ans[a[i]] = i;

    for(int i = 1; i <= n; ++i) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

