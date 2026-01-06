#include "bits/stdc++.h"
using namespace std;

int solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    
    int ans =0, z = 0;
    for(int x: v) {
        if(!x) z++;
        else ans += (z + 1)/ (k+1), z =0;
    }
    ans += (z + 1)/ (k+1), z =0;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    cin >> n;
    while (n--) {
        int ans = solve();
        cout<<ans<<endl;
    }

    return 0;
}
