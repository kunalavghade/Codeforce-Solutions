#include "bits/stdc++.h"
using namespace std;


void  solveSegNumFind(){
    int n, x;
    cin >> n >> x;

    bool isExist = 0;

    while(n--){
        int t;
        cin >> t;
        if(t == x) isExist = 1;
    }

    if(isExist) cout << "YES\n";
    else cout << "NO\n";
}

void solve() {
    int n;
    cin >> n;
    int m = 0, c = 0, a, b;

    while(n--) {
        solveSegNumFind();
    }

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}