#include <bits/stdc++.h>
using namespace std;    




void solve() {
    int n, c;
    cin>> n;
    int ans = 0, sum = 0;
    while(n--) {
        cin>> c;
        if(c > 0) {
            if(sum < 0) sum = c;
            else sum += c;
        }else {
            sum += c;
            if(sum < 0)  ans++;
        }
    }
    cout<< ans << "\n";
}
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

