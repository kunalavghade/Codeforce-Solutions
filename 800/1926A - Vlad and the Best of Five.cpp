#include "bits/stdc++.h"
using namespace std;


void aOrB() {
    string s;
    cin >> s;

    int a = 0, b  = 0;
    for(char c : s) {
        if (c == 'A') 
            a++;
        else b++;
    }

    cout << (a > b ? 'A' : 'B') << "\n";

}

void solve() {
    int n;
    cin >> n;
    while (n--)
        aOrB();
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}