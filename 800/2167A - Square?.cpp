/*

    Author: kunalavghade
    Date: 27-04-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
   int a, b, c, d;
   cin >> a >> b >> c >> d;
   
    if(a == b && a == c && a == d) 
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
   
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