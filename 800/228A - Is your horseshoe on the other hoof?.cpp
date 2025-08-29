#include <bits/stdc++.h>
using namespace std;    

void solve() {
    int n = 4, t;
    set<int> s;
    while(n--) {
        cin >> t;
        s.insert(t);
    }
   cout << 4 - s.size() << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

