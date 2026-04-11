/*

    Author: kunalavghade
    Date: 11-04-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n, t, x_or = 0;
    cin >> n;
    t = n;
    while(n--) {
        int x;
        cin >> x;
        x_or ^= x;
    }
    if(t&1) cout<<x_or<<endl;
    else {
        if(!x_or) cout<<0<<endl;
        else cout<<-1<<endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}