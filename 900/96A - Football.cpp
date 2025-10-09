#include "bits/stdc++.h"
using namespace std;




void solve() {
   string s;
   cin >> s;
   int c =1;
   for(int i = 1 ; i < s.size() ; i++){
        if(s[i] == s[i-1]) c++;    
        else c =1;
        if(c == 7){
            cout << "YES" << endl;
            return;
        }
   }
   if(c == 7) cout << "YES" << endl;
   else cout << "NO" << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}