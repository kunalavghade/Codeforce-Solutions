#include "bits/stdc++.h"
using namespace std;

void solveReqRem() {
    int d, r, num;
    cin >> d >> r >> num;

    int rem = num % d;

    if(rem == r) cout << num << "\n";
    else if(rem > r) cout << num - (rem - r) << "\n";
    else cout << num - (d + rem - r) << "\n";
    
}

void solve() {
    int n;
    cin >> n;

    while(n--){
        solveReqRem();
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}