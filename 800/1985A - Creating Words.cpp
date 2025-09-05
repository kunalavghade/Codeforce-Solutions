#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s1, s2;

    while(n--) {
        cin >> s1 >> s2;
        swap(s1[0], s2[0]);
        cout << s1 << " " << s2 << "\n";
    }


}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}