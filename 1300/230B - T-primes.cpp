#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;

vector<bool> sieve() {
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i)
                isPrime[j] = false;
        }
    }
    return isPrime;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<bool> isPrime = sieve();

    while (n--) {
        long long x;
        cin >> x;

        long long root = sqrt(x);

        if (root * root == x && isPrime[root])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}