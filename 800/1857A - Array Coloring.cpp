#include "bits/stdc++.h"
using namespace std;

void solveColoring() {
   int n, x;
    cin >> n;
    int odds = 0;
    while(n--){
        cin >> x;
        if(x&1) odds++;
    }

    if((odds&1) == 0) cout << "YES\n";
    else cout << "NO\n";

}

void solve() {
    int n;
    cin >> n;

    while(n--){
        solveColoring();
    }


}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}