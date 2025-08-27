#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;  

    int ans = 0, cur_cap = 0, enter, leave ;
    while(n--) {
        cin>>leave>>enter;
        cur_cap -= leave;
        cur_cap += enter;
        ans = max(ans, cur_cap);
    }
    cout << ans << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    solve();
    return 0;
}