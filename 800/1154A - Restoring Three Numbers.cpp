#include "bits/stdc++.h"
using namespace std;


void solve() {
    vector<int> A(4);
    cin >> A[0] >> A[1] >> A[2] >> A[3];

    sort(A.begin(), A.end());

    cout<<A[3] - A[2]<< " " << A[3] - A[1]<< " " << A[3] - A[0]<< "\n";
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}