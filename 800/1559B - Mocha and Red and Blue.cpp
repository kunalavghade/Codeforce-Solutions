#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin>>n>>s;
    int f = n+1;
    for(int i = 0; i < n; i++) {
        if(s[i] != '?') {
            f = i;
            break;
        }
    }

    for(int i = f-1; i >= 0; i--) 
        if(s[i] == '?') {
            if(s[i+1] == 'R') 
                s[i] = 'B';
            else 
                s[i] = 'R';
        }

    for(int i = f+1; i <= n; i++) {
        if(s[i] == '?') {
            if(s[i-1] == 'R')
                s[i] = 'B';
            else s[i] = 'R';
        }
    }

    cout<<s<<endl;
}

int main() {

    int n=1;
    cin>>n;
    while(n--) {
        solve();
    } 
    
    return 0;
}
