#include "bits/stdc++.h"
using namespace std;


void solve() {
    int n;
    cin >> n;

    while(n--) {
        int a , b, c;
        cin >> a >> b >> c;

        if(max(a, b) < c) {
            cout << "+" << endl;
        } else {
            cout << "-" << endl;
        }
    }   
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}