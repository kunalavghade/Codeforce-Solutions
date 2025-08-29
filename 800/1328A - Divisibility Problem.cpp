#include <bits/stdc++.h>
using namespace std;    

void solve() {
    int n, a, b; 
    cin >> n;

    while(n--) {
        cin >> a >> b;
        int r = a % b;
        if(r == 0) 
            cout << "0\n";
        else
            cout << (b - r) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

