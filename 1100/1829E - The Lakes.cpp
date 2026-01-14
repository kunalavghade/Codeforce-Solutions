#include "bits/stdc++.h"
using namespace std;

int sum(int i, int j, vector<vector<int>> &A) {
    if(i < 0 || j < 0 || i >= A.size() || j >= A[0].size() || A[i][j] == 0) 
        return 0;
    int tmp = A[i][j];
    A[i][j] = 0;
    return tmp + sum(i - 1, j, A) + sum(i, j - 1, A) + sum(i + 1, j , A) + sum(i, j + 1, A);
}

int solve() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> A(m, vector<int>(n));
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> A[i][j];
    
    int ans = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(A[i][j])
                ans = max(ans, sum(i, j, A));
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    cin >> n;
    while (n--) {
        int ans = solve();
        cout<<ans<<endl;
    }

    return 0;
}
