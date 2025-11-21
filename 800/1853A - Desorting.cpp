#include "bits/stdc++.h"
using namespace std;


int solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i  = 0; i < n; i++)
        cin>>v[i];

    int mn = INT_MAX;
    for(int i = 1; i < n; i++) {
        if(v[i-1] > v[i]) return 0;
        mn = min(mn, v[i] - v[i-1]);
    }
    return (mn / 2) + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n = 1;
    cin >> n;
    while(n-- ) {
       int ans = solve();
       cout<< ans << "\n";
    }
    
    return 0;
}