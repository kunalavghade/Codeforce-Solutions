#include "bits/stdc++.h"
using namespace std;



bool dfs(int i, vector<int> &a, int n) {
  if(i == n - 1) return a[i] == 0; // end
  if(a[i] == 0) return dfs(i+1, a, n);  // If current value is zero, just move on
  int need = a[i];
  if(i + 2 >= n) return false;
  if(a[i+1] < 2* need || a[i] < need) return false; // negative values
  // set default values
  a[i] = 0; a[i+1] -= 2*need; a[i+2] -= need;
  bool ok = dfs(i+1, a, n);
  // reset default values for backtracking
  a[i] = need; a[i+1] += 2*need; a[i+2] += need;
  return ok;
}

void solve() {
   int n;
   cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }
   cout << (dfs(0, a, n)  ? "YES" : "NO") << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}