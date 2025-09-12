#include "bits/stdc++.h"
using namespace std;

void plusOneOnSubSet() {
    int n, t;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++) {
        cin >> t;
        st.insert(t);
    }
    int ans = 0;
    vector<int> v(st.begin(), st.end());
    for(int i = 1; i < v.size(); i++) 
        ans += (v[i] - v[i - 1]);

    cout << ans << "\n";
}

void solve() {
    int n;
    cin >> n;
    while (n--)
        plusOneOnSubSet();
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}