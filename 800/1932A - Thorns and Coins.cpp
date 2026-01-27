#include "bits/stdc++.h"
using namespace std;

void solve() {
   int n;
   cin>>n;
   string s;
   cin>>s;
   
   int coins = 0, thorns = 0;
   for(char c: s) {
      if(c == '@') coins++;
      if(c == '*') thorns++;
      else thorns = 0;
      if(thorns > 1) break;
   }
   cout<<coins<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}