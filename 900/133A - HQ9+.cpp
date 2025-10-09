#include "bits/stdc++.h"
using namespace std;




void solve() {
    string s;
    cin >> s;
    bool flag = false;
    for(auto &c : s) {
        if(c == 'H' or c == 'Q' or c == '9') {
            flag = true;
            break;
        }
    }
    if(flag) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;   
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}