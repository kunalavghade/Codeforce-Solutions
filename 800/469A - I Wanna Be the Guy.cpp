#include <bits/stdc++.h>
using namespace std;    

void solve() {
    int n;
    cin >> n;
    vector<bool> a(n+1, false);
    a[0] = true;
    cin >> n;
    while(n--) {
        int t; cin >> t;
        a[t] = true;
    }
    cin >> n;
    while(n--) {
        int t; cin >> t;
        a[t] = true;
    }
    for(int i = 0; i < a.size(); i++) {
        if(!a[i]) {
            cout << "Oh, my keyboard!\n";
            return;
        }
    }
    cout << "I become the guy.\n";
}
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

