#include "bits/stdc++.h"
using namespace std;

int solve() {
    int n;
    cin >> n;

    int d3 = 0, d2 =0;
    
    while(n % 3 == 0) {
        d3++;
        n /= 3;
    }
    while(n % 2 == 0) {
        d2++;
        n /= 2;
    }

    if(n != 1 || d3 < d2) 
        return -1;


    return d3 + (d3 - d2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >> n;
    while(n-- ) {
       int ans = solve();
       cout<< ans << "\n";
    }
    
    return 0;
}