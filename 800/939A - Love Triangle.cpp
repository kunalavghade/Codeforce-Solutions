#include "bits/stdc++.h"
using namespace std;



int solve() {
    int n;
    cin >> n ;
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++) cin>>a[i];
    for(int i = 1; i < n+1; i++) 
        if(a[a[a[i]]] == i) return 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    // cin >> n;
    while (n--) {
        int ans = solve();
        cout<<(ans ? "YES" : "NO") <<endl;
    }

    return 0;
}
