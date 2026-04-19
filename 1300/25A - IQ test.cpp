/*

    Author: kunalavghade
    Date: 19-04-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++) 
        cin >> a[i];
   
    int even = -1, ec = 0;
    int odd = -1, oc = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i-1]&1) 
            even = i, ec++;
        else 
            odd = i, oc++;
    }

    cout<< (ec < oc ? even : odd) << endl;
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}