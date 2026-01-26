#include "bits/stdc++.h"
using namespace std;

int getMoves(long long x, long long y, long long m, long long n) {
    int d = 4;
    if(x == 1) d--;
    if(y == 1) d--;
    if(x == m) d--;
    if(y == n) d--;
    return d;   
}
    


int solve() {
    long long m, n;
    cin >> m >> n;
    long long x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    return  min(getMoves(x1, y1, m, n), getMoves(x2, y2, m, n));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    cin >> n;
    while (n--) {
        int ans = solve();
        cout<<ans <<endl;
    }

    return 0;
}
