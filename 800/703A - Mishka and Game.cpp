#include "bits/stdc++.h"
using namespace std;



void solve() {
    int n;
    cin >> n;
    int m = 0, c = 0, a, b;

    while(n--) {
        cin >> a >> b;
        if(a > b) m++;
        else if(a < b) c++;
    }

    if(m > c) cout << "Mishka\n";
    else if(c > m) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}