#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> A(n+1);
    for(int i = 1; i <= n; i++)
        cin>>A[i];

        
    int ans =0;
    for(int i = 1; i <= n; i++) {
        int cnt = 1;
         
        int l = max(0, (i -2) -1 +1);
        cnt += (l+1) /2;

       int r = max(0, n - (i +2) + 1);
       cnt += (r+1) /2;
       
       ans = max(ans, cnt+A[i]);
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}