#include "bits/stdc++.h"
using namespace std;


void solve() {
   int a,b;
   cin >> a >> b;

   int diff_pair = min(a, b);
   int diff = (max(a, b) - diff_pair);
   int same_pair = diff&1 ?  (diff - 1) / 2 : diff / 2;
   
   cout << diff_pair << " " << same_pair << "\n";
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}