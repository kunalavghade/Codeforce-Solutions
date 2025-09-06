#include "bits/stdc++.h"
using namespace std;

void solveShortStr() {
    string s, ans;
    cin >> s;

    for(int i = 0; i < s.size(); i+=2)
        ans.push_back(s[i]);

    cout << ans << s.back() << "\n";
}

void solve() {
    int n;
    cin >> n;

   while(n--){
       solveShortStr();
    }


}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}