#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin>>a[i];

    int cn = 0, mn = INT_MIN, z = 0;
    for(int x: a) {
        if(x < 0) {
            cn++;
            mn = max(mn, x);
        }
        else if(x == 0) z++;
    }

    long long ans = 0;
    for(int x: a) {
        if(x<0) {
            if(cn&1 and x == mn ) {
                if(z) ans += abs(x+1), z = 0; 
                else  ans += 1-x;
                cn--;
            }
            else ans += abs(x+1);
        }
        else ans += abs(x-1);
    }

    cout<<ans;
}

int main() {

    int n=1;
    //cin>>n;
    while(n--) {
        solve();
    } 
    
    return 0;
}
