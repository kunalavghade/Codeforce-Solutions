#include "bits/stdc++.h"
using namespace std;



void solve() {
    int n , k;
    cin >> k;
    while(k--) {
        cin >> n;

        if(n <= 3)
        cout << n << "\n";
        else
        cout << 2 << "\n";
    }

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}