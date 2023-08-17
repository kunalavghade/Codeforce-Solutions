#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, t = 0, c = 0;
    cin>>n>>c;

    unordered_map<int,int> mp;
    for(int i = 0; i < n; ++i) {
        cin>>t;
        mp[t]++;
    }
    
    int ans = 0;
    for(auto x: mp) {
        ans += min(c ,  x.second);
    }
    cout<<ans<<endl;
}

int main() {

    int n=1;
    cin>>n;
    while(n--) {
        solve();
    } 
    
    return 0;
}
