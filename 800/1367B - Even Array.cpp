#include "bits/stdc++.h"
using namespace std;

void solveEvenArray() {
    int n, t;
    cin >> n;
    int i = 0, s1 = 0, s2 = 0;

    while(n--){
        cin >> t;
        bool p = (t&1), idxp = (i&1);
        if(!p && idxp) s1++;
        else if(p && !idxp) s2++;
        i++;
    }

    if(s1 != s2) cout << "-1\n";
    else cout << s1 << "\n";
}

void solve() {
    int n;
    cin >> n;

    while(n--){
        solveEvenArray();
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}
