
#include<bits/stdc++.h>
using namespace std;

void solve() {
}

int main() {

    
    int n=1;
    cin>>n;
    //while(n--) {
    //    solve();
     // } 
    
    string ans = "0000000000", s;
    cin>>s;
    for(char c: s) {
        if(c == 'L') {
            int i = 0;
            while(ans[i] == '1') i++;
            ans[i] = '1';
        }
        else if(c == 'R') {
            int i = 9;
            while(ans[i] == '1') i--;
            ans[i] = '1';
        }else ans[c-'0'] ='0';

    }
    cout<<ans;

    return 0;
}
