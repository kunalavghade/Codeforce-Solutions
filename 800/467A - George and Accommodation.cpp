#include<bits/stdc++.h>
using namespace std;

int ans =0;
void solve() {
    int a, b;
    cin>>a>>b;
    ans += abs(b-a) >=2;
}

int main() {

    int n=1;
    cin>>n;
    while(n--) {
        solve();
    } 
    cout<<ans;
    
    return 0;
}
