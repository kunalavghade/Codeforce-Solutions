#include "bits/stdc++.h"
using namespace std;


int solve() {
    int n;
    cin>>n;
    return n-1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n = 1;
    cin >> n;
    while(n-- ) {
       int ans = solve();
       cout<< ans << "\n";
    }
    
    return 0;
}