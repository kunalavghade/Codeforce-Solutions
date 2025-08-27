#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;  
    bool c;
    bool isOk = true;
    while(n--) {
        cin>>c;
        if(c) isOk = false;
    }
    if(!isOk) cout<<"HARD\n";
    else cout<<"EASY\n";
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    solve();
    return 0;
}