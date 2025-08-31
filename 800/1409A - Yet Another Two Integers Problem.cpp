#include "bits/stdc++.h"
using namespace std;


void solve() {
    int n;
    cin >> n;

    while(n--) {
       int a, b;
       cin >> a >> b;
       
       int c = abs(a - b);

       int r = c % 10;

       cout <<  (c /10) + (r > 0) << endl;

    }   
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}