#include <bits/stdc++.h>
using namespace std;    


void shift(vector<int>& a, int l, int r) {
    int temp = a[l];
    for(int i = l; i < r-1; i++) {
        a[i] = a[i + 1];
    }
    a[r-1] = temp;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mxi = 0, mx = 0, mni = 0, mn = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(a[i] <= mn) {
            mni = i;
            mn = a[i];
        }
    }

    shift(a, mni, n);

    for(int i = n - 1; i >= 0; i--) {
        if(a[i] >= mx) {
            mxi = i;
            mx = a[i];
        }
    }

    cout << a.size() - mni + mxi -1 << "\n"; 

}
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

