#include "bits/stdc++.h"
using namespace std;




void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(begin(a),end(a));
    for(int x: a)
    cout<< x << " ";
    cout << endl;

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}