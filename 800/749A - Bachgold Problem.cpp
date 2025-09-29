#include "bits/stdc++.h"
using namespace std;



void solve() {
    int n;
    cin >> n;

    if(n <= 3) {
        cout << 1 << endl << n << "\n";
        return;
    }
    bool isOdd = n % 2;
    if(isOdd) n -= 3;
    cout << n / 2 + isOdd << "\n";
    for(int i = 0; i < n / 2; i++) {
        cout << "2 ";
    }
    if(isOdd) cout << "3";
    cout << "\n";

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}