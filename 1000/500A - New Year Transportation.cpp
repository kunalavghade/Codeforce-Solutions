#include "bits/stdc++.h"
using namespace std;

int solve() {
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    
    int i = 0;
    while(i < t-1) 
        i += v[i];

    if(i == t-1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    // cin >> n;
    while (n--) {
        solve();
    }

    return 0;
}
