#include "bits/stdc++.h"
using namespace std;

bool isPosible(int n, int k) {
    if(n == k) return true;
    if((n%3 != 0) || (n < k) || n < 1) return false;
    int left = n / 3;
    int right = n - left;
    return isPosible(left, k) || isPosible(right, k);
}

void solve() {
   int n, k;
   cin>>n>>k;
   
   cout<<(isPosible(n, k) ? "YES" : "NO")<<endl;
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