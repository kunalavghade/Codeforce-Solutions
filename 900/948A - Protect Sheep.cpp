#include "bits/stdc++.h"
using namespace std;

void solve() {
    int m, n;
    cin >> m >> n;
    vector<string> A(m);
    for(int i = 0; i < m; i++)
        cin>>A[i];

    int dir[5] = {1, 0, -1, 0, 1};

    for(int i = 0; i < m; i++) 
        for(int j = 0; j < n; j++)
            if(A[i][j] == 'S') {
                for(int k = 0; k < 4; k++) {
                    int ni = i + dir[k];
                    int nj = j + dir[k + 1];
                    if(ni >= 0 && ni < m && nj >= 0 && nj < n && A[ni][nj] == 'W') {
                        cout<<"No";
                        return;
                    }
                }
            }

    cout << "Yes\n";
    for (int r = 0; r < m; r++) {
        for (int c = 0; c < n; c++) {
            if (A[r][c] == '.') {
                A[r][c] = 'D';
            }
        }
        cout << A[r] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
