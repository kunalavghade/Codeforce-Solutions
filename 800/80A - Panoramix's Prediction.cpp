#include "bits/stdc++.h"
using namespace std;

bool primes[51];

void calcPrimes() {
    fill(begin(primes), end(primes), true);
    primes[0] = primes[1] = false;
    for(int i = 2; i * i <= 50; ++i) {
        if(primes[i]) {
            for(int j = i * i; j <= 50; j += i) {
                primes[j] = false;
            }
        }
    }
}

void solve() {
    calcPrimes();
    int a, b;
    cin >> a >> b;

    if(primes[a] && primes[b]) {
        for(int i = a+1; i < b; i++) {
            if(primes[i]) {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}