#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, pre = INT_MIN;
    cin>>n;
    vector<int> a(n);

    for(int i = 0 ; i < n ; i++) 
        cin>> a[i];

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(i and a[i-1] > a[i]) {
            if(pre == INT_MAX)
                ans++, pre = 0;
            else
                pre = INT_MAX;
        }
        else pre = INT_MAX;
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
