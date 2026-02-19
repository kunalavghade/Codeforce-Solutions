#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;

    // Impossible cases
    if ((s == 0 && m > 1) || s > 9 * m) {
        cout << "-1 -1";
        return 0;
    }

    if (s == 0 && m == 1) {
        cout << "0 0";
        return 0;
    }

    // ---------- MAX ----------
    int sum = s;
    string max_num = "";
    for (int i = 0; i < m; i++) {
        int digit = min(9, sum);
        max_num += (digit + '0');
        sum -= digit;
    }

    // ---------- MIN ----------
    sum = s;
    string min_num(m, '0');
    
    sum--; // reserve 1 for first digit

    for (int i = m - 1; i > 0; i--) {
        int digit = min(9, sum);
        min_num[i] = digit + '0';
        sum -= digit;
    }

    min_num[0] = (sum + 1) + '0';  // add reserved 1

    cout << min_num << " " << max_num;
}
