
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++) {
        cin>>b[i];
    }

    for(int i = 0; i < n; i++) {
        if(i == 0) cout<<b[i]-a[i]<< " ";
        else {
            a[i] = max(a[i], b[i-1]);
            cout<<b[i]-a[i]<<" ";
        }
    }
    cout<<endl;
}

int main() {

    int n=1;
    cin>>n;
    while(n--) {
        solve();
    } 
    
    return 0;
}
