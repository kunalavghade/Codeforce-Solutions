#include "bits/stdc++.h"
using namespace std;


bool checkPal() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int freq[26] = {0};
    memset(freq, 0, sizeof(freq));
    for(char c : s) freq[c - 'a']++;

    int twice = 0, odd = 0;
    for(int f : freq) {
        twice += f / 2;
        odd += f & 1;
    }

    odd -= k;
    
    return odd <= 1 || (odd < 0 && twice >= -odd / 2);

}

void solve() {
    int n; cin >> n;

    while(n--) {
        bool isPossiblePalindrome = checkPal();
        cout << (isPossiblePalindrome ? "YES" : "NO") << "\n";
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}