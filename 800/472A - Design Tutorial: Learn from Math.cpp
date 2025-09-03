#include "bits/stdc++.h"
using namespace std;


bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;

    int mid = n / 2;
    for(int i = mid; i >= 2; i--) {
        if(!isPrime(i) && !isPrime(n - i)) {
            cout << i << " " << n - i << "\n";
            return;
        }
    }

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}