
#include<bits/stdc++.h>
using namespace std;

void solve() {
    unordered_map<int,int> mp;
    int n,t, ans = 0;
    cin>>n;
    for(int i = 0; i <n ;i++) {
        cin>>t;
        if(mp.count(t))
            ans = max(mp[t], ans);
        mp[t] = i+1;
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
