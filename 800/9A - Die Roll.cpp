#include "bits/stdc++.h"
using namespace std;



void solve() {
   int a, b;
   cin >> a >> b;

   int mx = max(a, b);

    if(mx == 1) cout << "1/1\n";
    else if(mx == 2) cout << "5/6\n";
    else if(mx == 3) cout << "2/3\n";
    else if(mx == 4) cout << "1/2\n";
    else if(mx == 5) cout << "1/3\n";
    else if(mx == 6) cout << "1/6\n";

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}