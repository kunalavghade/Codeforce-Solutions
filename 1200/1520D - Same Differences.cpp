#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    vector<int > a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    long long ans =0;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int diff = a[i] - i;
        ans += mp[diff];
        mp[diff]++;
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}