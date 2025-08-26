#include <bits/stdc++.h>
using namespace std;

int n, k, M = 1e9+7;

void solve() {
  long long c = 1, ans =0;
  while(k) {
    if(k&1) ans = (c+ans) %M;
    k>>=1, c = (c*n) % M;
  }  
  cout<<ans<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--) {
    cin>>n>>k;
    solve();
  }
  return 0;
}
