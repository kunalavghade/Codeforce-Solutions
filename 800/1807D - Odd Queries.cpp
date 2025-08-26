
#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n, q;
    cin>>n>>q;
    vector<int> v(n+1,0);
    for(int i = 1; i <= n; i++) {
        cin>>v[i];
        v[i] += v[i-1];
    }
    int s, e, m;
    while(q--) {
        cin>>s>>e>>m;
        int num = v[s-1] + (e-s+1) * m + v[n] - v[e];
        if(num & 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main() {

    int n=1;
    cin>>n;
    while(n--) {
    solve();
    } 
    
    return 0;
}
