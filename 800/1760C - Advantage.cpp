
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        pq.push(a[i]);
        if(pq.size() > 2) 
            pq.pop();
    }
    
    int mxs = pq.top(); pq.pop();
    int mx = pq.top();

    // cout<<mx<< " "<<mxs<<endl;
    for(int x: a) {
        if(x == mx) 
            cout<<x-mxs<<" ";
        else
            cout<<x-mx<<" ";
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
