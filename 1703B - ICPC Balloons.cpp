#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans = 0;
    string s;
    cin>>n>>s;
    int a[26] = {};
    for(char x: s) 
        ans +=++a[x-'A'] ==1 ? 2 : 1;
    
    cout<<ans<<endl;

}

int main() {

    int n=1;
    cin>>n;
    while(n--) {
        solve();
    } 
    
    return 0;
}
