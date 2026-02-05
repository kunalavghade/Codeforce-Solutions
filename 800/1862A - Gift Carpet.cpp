#include "bits/stdc++.h"
using namespace std;



void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> carpet(n);
    for (int i = 0; i < n; i++) {
        cin >> carpet[i];
    }

    string target = "vika";
    int current_target_index = 0;

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (carpet[i][j] == target[current_target_index]) {
                current_target_index++;
                break; 
            }
        }
        
        if (current_target_index == 4) 
            break;
    }

    if (current_target_index == 4) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
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