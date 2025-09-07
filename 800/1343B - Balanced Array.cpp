#include "bits/stdc++.h"
using namespace std;


void solve() {
    int n, x;
    cin >> n;


    while(n--) {
        cin >> x;
        
        if((x/2)&1) {
            cout << "NO\n";
            continue;
        }
        else cout << "YES\n";

        int sum = 0;
        for(int i = 2; i <= x; i += 2) {
            cout << i << " ";
            sum += i;
        }

        for(int i = 1; i < x-1; i += 2) {
            cout << i << " ";
            sum -= i;
        }
        cout << sum << "\n";

    }

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}