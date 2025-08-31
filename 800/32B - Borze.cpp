#include "bits/stdc++.h"
using namespace std;



void solve() {
    string s;
    cin >> s;
    string ans;
    for(int i = 0 ; i < s.size(); i++) {
        if(s[i] == '.') ans.push_back('0');
        if(s[i] == '-') {
            if(s[i+1] == '.') ans.push_back('1');
            else ans.push_back('2');
            i++;
        }
    }
    cout << ans << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}