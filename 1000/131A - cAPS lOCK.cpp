/*

    Author: kunalavghade
    Date: 16-03-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    string s;
    cin >> s;

    int upper = 0;
    for(char c : s) {
        if(isupper(c)) upper++;
    }
    if((islower(s[0]) && upper == s.size() - 1)) {
        for(auto &x : s) 
            x = tolower(x);
        s[0] = toupper(s[0]);
    }
    else if(upper == s.size()) {
        for(auto &x : s) 
            x = tolower(x);
    }
    cout << s << "\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

