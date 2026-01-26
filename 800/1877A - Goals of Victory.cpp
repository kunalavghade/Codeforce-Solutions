#include "bits/stdc++.h"
using namespace std;


int solve() {
    int n, sum = 0;
    cin >> n;
    int x;
    for(int i = 0; i < n-1; i++) {
        cin >> x;
        sum += x;
    }
    return -sum;
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