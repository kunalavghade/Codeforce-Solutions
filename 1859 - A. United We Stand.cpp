
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n), b, c;
    for(int i = 0 ;i < n; i++)
        cin>>a[i];

    unordered_map<int, int> mp;
    int mx = a[0];
    for(int x: a) {
        mp[x]++;
        mx = max(mx, x);
    }
    if(mp.size() == 1) {
        cout<<-1<<endl;
        return;
    }
    
    for(int i = 0; i < n; i++) {
        if(mx == a[i])
            c.push_back(mx);
        else b.push_back(a[i]);
    }

    cout<<b.size()<< " "<<c.size()<<endl;
    for(auto x: b)
        cout<<x<<" ";
    cout<<endl;
    for(auto x: c) 
        cout<<x<<" ";
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
