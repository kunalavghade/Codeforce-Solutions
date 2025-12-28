#include "bits/stdc++.h"
using namespace std;


bool solve() {
    long long n, k, x;
    cin>>n>>k>>x;
    long long mn = k * (k+1)/2;
    long long mx = k * (2 * n - k +1) /2;
    return mn <= x && mx >= x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n = 1;
    cin >> n;
    while(n-- ) {
       bool ans = solve();
       cout<< (ans ? "YES" : "NO") << "\n";
    }
    
    return 0;
}