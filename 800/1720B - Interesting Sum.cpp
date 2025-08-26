
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i <n; i++) 
        cin>>a[i];
    
    sort(begin(a),end(a));
    int ans = (a[n-1] - a[0]) + (a[n-2]-a[1]);

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
