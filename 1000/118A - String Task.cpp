/*

    Author: kunalavghade
    Date: 15-03-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    string s;
    cin>>s;
    string ans="";
    for(char x: s) {
        char c = tolower(x);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') 
            continue;
        ans.push_back('.');
        ans.push_back(c);
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

