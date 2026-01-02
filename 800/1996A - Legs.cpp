#include "bits/stdc++.h"
using namespace std;


int solve() {
    int n;
    cin >> n;
    int ans = (n / 4) + (!!((n % 4) > 1));
    cout<< ans<<endl;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n = 1;
    cin >> n;
    while(n-- ) {
       int ans = solve();
    //    cout<< ans << "\n";
    }
    
    return 0;
}