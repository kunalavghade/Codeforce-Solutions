#include "bits/stdc++.h"
using namespace std;

void solveAb(){
    int n;
    cin >> n;
    int ans = 0;
    while(n) {
        ans += n %10;
        n /= 10;
    }
    cout << ans << endl;

}

void solve() {
   int n;
   cin >> n;
   while(n--) {
    solveAb();
   }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}