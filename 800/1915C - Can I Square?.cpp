#include "bits/stdc++.h"
using namespace std;

bool isSqureSum() {
    long long int n, sum = 0, t;
    cin >> n;
   
    while(n--) {
        cin >> t;
        sum += t;
    }

    long long int root = sqrt(sum);
    return root * root == sum;
}

void solve() {
    int n;
    cin >> n;

    while(n--) {
        bool possible = isSqureSum();
        if(possible) cout << "YES\n";
        else cout << "NO\n";
        
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}