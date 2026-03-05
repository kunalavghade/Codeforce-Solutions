#include "bits/stdc++.h"
using namespace std;


void solve() {
    string s;
    cin >> s;
    // cout<<s;

    string f =  "hello";
    int j = 0;
    for(char c: s) {
        if(c == f[j]) 
            j++;
        if(j == f.size()) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}