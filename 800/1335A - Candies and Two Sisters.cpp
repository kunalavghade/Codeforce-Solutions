#include <bits/stdc++.h>
using namespace std;    

void solve() {
    int n;
    cin >> n;
    while(n--) {
        int a;
        cin >> a;
        if(a <= 2) cout << 0 << "\n";
        else cout << (int)(( a - 1 )/2) << "\n";
    }
}
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

