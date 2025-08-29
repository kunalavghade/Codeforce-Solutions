#include <bits/stdc++.h>
using namespace std;    

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    int ans = 1;
    for(int i = 1; i < n; i++)
        if(a[i] != a[i-1]) 
            ans++;
            
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}