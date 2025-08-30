#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> A;

    while (n--) {
        vector<int> row(2);
        cin >> row[0] >> row[1];
        A.push_back(row);
    }

    int ans = 0;
    for(int i = 0; i < A.size(); i++) {
        for(int j = 0; j < A.size(); j++) {
            if(i != j && A[i][0] == A[j][1]) ans++;
        }
    }
   cout << ans << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}