#include "bits/stdc++.h"
using namespace std;

void solveMaxZero() {
   int n, t, c = 0, ans =0;
   cin >> n;
   while(n--){
       cin >> t;
       if(t == 0) c++;
       else c = 0;
        ans = max(ans, c);
   }
   cout << ans << "\n";
}

void solve() {
    int n;
    cin >> n;

   while(n--){
       solveMaxZero();
    }


}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}