#include <bits/stdc++.h>
using namespace std;    

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    for(int i = 0; i < s1.size(); i++) 
         s1[i] = s1[i] == s2[i] ? '0' : '1';

    cout << s1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

