#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v(n), tmp;
    for(int i = 0; i < n; i++)
        cin>>v[i];

    sort(begin(v),end(v));
    int w = 1;
    for(int i = 1; i < n; i++)  {
        if(v[i] != v[i-1]) 
            v[w++] = v[i];
        else
            tmp.push_back(v[i]);
    }
    int i =0;
    while(w <(int) v.size()) v[w++] = tmp[i++];
    for(int x: v)
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
