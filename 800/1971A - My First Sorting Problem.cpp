#include <bits/stdc++.h>
using namespace std;    

void firstSort() {
    int x, y;
    cin >> x >> y;
    if(x < y)
        cout << x << " " << y << "\n";
    else
        cout << y << " " << x << "\n";
}

void solve() {
    int n;
    cin>>n;
    while(n--) {
        firstSort();
    }
}
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

