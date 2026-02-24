#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    cout<< ((k & 1) ? n : 0 )<< endl;
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}