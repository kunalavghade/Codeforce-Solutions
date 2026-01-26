#include "bits/stdc++.h"
using namespace std;

void solve() {
    string u, v;
    unordered_map<string, string> utov, vtou;
    int n=5;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> u >> v;

        if(vtou.count(u)) {
            string org = vtou[u];
            utov[org] = v;
            vtou.erase(u);
            vtou[v] = org;
        }
        else {
            utov[u] = v;
            vtou[v] = u;
        }
    }
    cout<<utov.size()<<endl;
    for(auto it : utov) 
        cout << it.first << " " << it.second << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
