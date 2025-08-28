#include <bits/stdc++.h>
using namespace std;    

void solve() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--) {
        for(int i = 0; i < n; i++) {
            if(s[i] == 'B' && i + 1 < n && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}