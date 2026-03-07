#include "bits/stdc++.h"
using namespace std;


void solve() {
    int n;
    cin>>n;
    string s;
    unordered_map<string, int> mp;
    while(n--) {
        cin>>s;
        if(mp.count(s)) 
            cout<<s<<mp[s]<<endl;
        else 
            cout<<"OK"<<endl;
        mp[s]++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}