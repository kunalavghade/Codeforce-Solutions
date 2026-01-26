#include "bits/stdc++.h"
using namespace std;


int solve() {
    int n, k;
    cin>>n>>k;
    vector<long long> req(n), has(n);
    for(int i =0; i < n; i++) cin >> req[i];
    for(int i =0; i < n; i++) cin >> has[i];
    
    long long ans = 0, l = 0, h = 2e9;
    while(l<=h) {
        long long mid = l + (h - l)/2, need = 0;
        for(int i =0; i < n; i++) {
            long long required = req[i] * mid;
            if (required > has[i])
                need += required - has[i];
            if(need > k) break;
        }
        if (need <= k) 
            ans = mid, l = mid + 1;
        else 
            h = mid - 1;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n = 1;
    // cin >> n;
    while(n-- ) {
       int ans = solve();
       cout<< ans << "\n";
    }
    
    return 0;
}