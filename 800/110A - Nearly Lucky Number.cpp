#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n;
    cin >> n;

    int lucky_count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) 
            lucky_count++;
        n /= 10;
    }

    if (lucky_count == 4 || lucky_count == 7) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}