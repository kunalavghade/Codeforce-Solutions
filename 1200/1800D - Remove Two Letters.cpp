#include "bits/stdc++.h"
using namespace std;

void solve(){
    string s;
    int n;
    cin >> n >> s;
    int duplicates = 0;

    for(int i = 0; i + 2 < n; i++) {
        if(s[i] == s[i+2])
            duplicates++;
    }

    int ans =  (n - 1) - duplicates;
    cout<<ans<<endl;
   
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